// 函数: sub_141d06310
// 地址: 0x141d06310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0xa
arg1[0x28] = (*(*arg2 + 0x28))(arg2)
uint64_t rbp
rbp.b = 0
int32_t* result

do
    int64_t rdx = arg1[0x28]
    i -= 1
    int32_t* result_2 = 0x3d
    
    if (i s< 7)
        result_2 = 0x2d
    
    int32_t* result_1 = &result_2[0x28]
    
    if (i s< 8)
        result_1 = result_2
    
    result = result_1 + 1
    
    if (i s< 9)
        result = result_1
    
    if (rdx - result s>= 0)
        (*(*arg2 + 0x178))(arg2, rdx - result)
        void var_48
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_48)
        sub_141d0fab0(&arg1[0x14], arg2, i, arg4)
        rbp = zx.q(rbp.b)
        
        if (arg1[0x14].d == 0x5a6f12e1)
            rbp = 1
        
        result, arg4 =
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
            &var_48)
        
        if (rbp.b != 0)
            uint64_t r9_1 = zx.q(arg1[0x14].d)
            int16_t* const rbx_1 = &data_142d40450
            
            if (r9_1.d != 0x5a6f12e1)
                int16_t* const rax_3
                
                if (arg1[2].d == 0)
                    rax_3 = &data_142d40450
                else
                    rax_3 = arg1[1]
                
                int16_t* const var_58_1 = rax_3
                sub_140af98a0("Unknown", 0x1364, 
                    Trailing magic number (%ud) in '%s' is different than the expected one. Verify your "
                "installation.", r9_1)
                sub_140afbb40()
            
            uint64_t r9_2 = zx.q(*(arg1 + 0xa4))
            
            if (r9_2.d s< 1 || r9_2.d s> i)
                int16_t* const rax_4
                
                if (arg1[2].d == 0)
                    rax_4 = &data_142d40450
                else
                    rax_4 = arg1[1]
                
                int16_t* const var_58_2 = rax_4
                sub_140af98a0("Unknown", 0x1365, 
                    Invalid pak file version (%d) in '%s'. Verify your installation.", r9_2)
                sub_140afbb40()
            
            int64_t rcx_5 = arg1[0x15]
            
            if (rcx_5 s< 0 || rcx_5 s>= arg1[0x28])
                int16_t* const r9_3
                
                if (arg1[2].d == 0)
                    r9_3 = &data_142d40450
                else
                    r9_3 = arg1[1]
                
                int64_t var_50_1 = arg1[0x28]
                int64_t var_58_3 = rcx_5
                sub_140af98a0("Unknown", 0x1366, 
                    Index offset for pak file '%s' is invalid (%lld is bigger than file size %lld)", 
                    r9_3)
                sub_140afbb40()
                rcx_5 = arg1[0x15]
            
            int64_t rdx_4 = arg1[0x16]
            int64_t rdx_5 = rdx_4 + rcx_5
            
            if (rdx_4 + rcx_5 s< 0 || rdx_5 s> arg1[0x28])
                if (arg1[2].d != 0)
                    rbx_1 = arg1[1]
                
                int64_t var_58_4 = rdx_5
                sub_140af98a0("Unknown", 0x1367, 
                    Index end offset for pak file '%s' is invalid (%lld)", rbx_1)
                sub_140afbb40()
            
            if ((*(arg1 + 0xdc) | arg1[0x1b].d | *(arg1 + 0xd4) | arg1[0x1a].d) != 0)
                sub_141d050e0()
                void arg_8
                result = sub_141d02ac0(&data_143a210b0, &arg_8, &arg1[0x1a])
            
            if ((*(arg1 + 0xdc) | arg1[0x1b].d | *(arg1 + 0xd4) | arg1[0x1a].d) == 0
                    || *result != 0xffffffff)
                if (arg3 != 0)
                    sub_141d08150(arg1, arg2)
                
                sub_140af2b60()
                result = sub_140b21a10(&data_143dbb3f0, u"checkpak")
                
                if (result.b != 0)
                    result = sub_141cfd560(arg1)
            
            *(arg1 + 0x149) = 1
            break
while (i s>= 1)

return result
