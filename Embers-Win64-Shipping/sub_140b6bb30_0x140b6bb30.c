// 函数: sub_140b6bb30
// 地址: 0x140b6bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x15c0)
void var_15e8
int64_t rax_1 = __security_cookie ^ &var_15e8
int128_t* rsi = arg1
sub_140b6e120(GetCurrentProcess())
HANDLE hProcess = data_1439a9620
int64_t* result = sub_140b6bf70(hProcess)

if (result != 0)
    var_1114
    memset(&var_1114, 0, 0xcbc)
    int32_t result_1 = 0
    struct IMAGEHLP_MODULEW64 ModuleInfo
    ModuleInfo.SizeOfStruct = 0xcc0
    
    if (*result != 0)
        int64_t i = 0
        
        while (i s< sx.q(arg2))
            uint64_t qwAddr = 0
            int32_t var_15b0_1 = 0
            int64_t var_15a8_1 = 0
            var_458
            memset(&var_458, 0, 0x208)
            void var_248
            memset(&var_248, 0, 0x208)
            data_143e18630(hProcess, result[i], &qwAddr, 0x18)
            data_143e18628(hProcess, result[i], &var_248, 0x104)
            data_143e18620(hProcess, result[i], &var_458, 0x104)
            uint64_t BaseOfImage
            memset(&BaseOfImage, 0, 0x468)
            int64_t rcx_10 = 0
            int128_t zmm0_1
            wchar16 _Destination[0x1f]
            void var_1538
            void var_1338
            
            if (SymGetModuleInfoW64(hProcess, qwAddr, &ModuleInfo) == 0)
                BaseOfImage = qwAddr
                int16_t j
                
                do
                    j = *(&var_248 + rcx_10)
                    *(&var_1538 + rcx_10) = j
                    rcx_10 += 2
                while (j != 0)
                int64_t rcx_13 = 0
                int32_t var_1580_1 = var_15b0_1
                int16_t j_1
                
                do
                    j_1 = *(&var_248 + rcx_13)
                    *(&var_1338 + rcx_13) = j_1
                    rcx_13 += 2
                while (j_1 != 0)
                
                int32_t rdx_4 = 0
                int64_t var_15c8 = 0
                int32_t rcx_14 = 0
                int64_t var_15c0_1 = 0
                
                if (var_458.w != j_1)
                    int64_t rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (*(&var_458 + (rbx_1 << 1)) != 0)
                    
                    if (rbx_1.d + 1 s> 0)
                        sub_1405947f0(&var_15c8, rbx_1.d + 1)
                        rcx_14 = var_15c0_1:4.d
                        rdx_4 = var_15c0_1.d
                    
                    int32_t rax_11 = rbx_1.d + 1 + rdx_4
                    var_15c0_1.d = rax_11
                    
                    if (rax_11 s> rcx_14)
                        sub_140594770(&var_15c8)
                    
                    UnDecorator::getReferenceType(var_15c8, &var_458, (rbx_1.d + 1) * 2)
                
                int16_t* _Source_1
                sub_140b18700(&_Source_1, &var_15c8, 1)
                int64_t rcx_19 = var_15c8
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                int16_t* const _Source = &data_142d40450
                int32_t var_1598
                
                if (var_1598 != 0)
                    _Source = _Source_1
                
                wcsncpy(&_Destination, _Source, 0x1f)
                int16_t* _Source_2 = _Source_1
                int16_t var_153a_1 = 0
                
                if (_Source_2 != 0)
                    sub_140a74f90(_Source_2)
            else
                BaseOfImage = ModuleInfo.BaseOfImage
                int16_t j_2
                
                do
                    var_10b4
                    j_2 = *(&var_10b4 + rcx_10)
                    *(&var_1538 + rcx_10) = j_2
                    rcx_10 += 2
                while (j_2 != 0)
                int64_t rcx_11 = 0
                uint32_t ImageSize = ModuleInfo.ImageSize
                int16_t j_3
                
                do
                    var_eb4
                    j_3 = *(&var_eb4 + rcx_11)
                    *(&var_1338 + rcx_11) = j_3
                    rcx_11 += 2
                while (j_3 != 0)
                int64_t rcx_12 = 0
                int16_t j_4
                
                do
                    var_10f4
                    j_4 = *(&var_10f4 + rcx_12)
                    *(&_Destination + rcx_12) = j_4
                    rcx_12 += 2
                while (j_4 != 0)
                zmm0_1.d = ModuleInfo.PdbSig70.Data1
                zmm0_1:4.w = ModuleInfo.PdbSig70.Data2
                zmm0_1:6.w = ModuleInfo.PdbSig70.Data3
                zmm0_1:8.b = ModuleInfo.PdbSig70.Data4[0]
                zmm0_1:9.b = ModuleInfo.PdbSig70.Data4[1]
                zmm0_1:0xa.b = ModuleInfo.PdbSig70.Data4[2]
                zmm0_1:0xb.b = ModuleInfo.PdbSig70.Data4[3]
                zmm0_1:0xc.b = ModuleInfo.PdbSig70.Data4[4]
                zmm0_1:0xd.b = ModuleInfo.PdbSig70.Data4[5]
                zmm0_1:0xe.b = ModuleInfo.PdbSig70.Data4[6]
                zmm0_1:0xf.b = ModuleInfo.PdbSig70.Data4[7]
                uint32_t PdbAge = ModuleInfo.PdbAge
                uint32_t PdbSig = ModuleInfo.PdbSig
                uint32_t TimeDateStamp = ModuleInfo.TimeDateStamp
                int128_t var_1130_1 = zmm0_1
            int128_t* r8_8 = rsi
            uint64_t* rcx_21 = &BaseOfImage
            int64_t j_6 = 8
            int128_t zmm1_1
            int64_t j_5
            
            do
                r8_8 = &r8_8[8]
                zmm0_1 = *rcx_21
                zmm1_1 = *(rcx_21 + 0x10)
                rcx_21 = &rcx_21[0x10]
                r8_8[-8] = zmm0_1
                zmm0_1 = *(rcx_21 - 0x60)
                r8_8[-7] = zmm1_1
                zmm1_1 = *(rcx_21 - 0x50)
                r8_8[-6] = zmm0_1
                zmm0_1 = *(rcx_21 - 0x40)
                r8_8[-5] = zmm1_1
                zmm1_1 = *(rcx_21 - 0x30)
                r8_8[-4] = zmm0_1
                zmm0_1 = *(rcx_21 - 0x20)
                r8_8[-3] = zmm1_1
                zmm1_1 = *(rcx_21 - 0x10)
                r8_8[-2] = zmm0_1
                r8_8[-1] = zmm1_1
                j_5 = j_6
                j_6 -= 1
            while (j_5 != 1)
            int64_t rdx_8 = rcx_21[0xc]
            i += 1
            zmm1_1 = *(rcx_21 + 0x10)
            result_1 += 1
            rsi += 0x468
            *r8_8 = *rcx_21
            zmm0_1 = *(rcx_21 + 0x20)
            r8_8[1] = zmm1_1
            zmm1_1 = *(rcx_21 + 0x30)
            r8_8[2] = zmm0_1
            zmm0_1 = *(rcx_21 + 0x40)
            r8_8[3] = zmm1_1
            zmm1_1 = *(rcx_21 + 0x50)
            r8_8[4] = zmm0_1
            r8_8[5] = zmm1_1
            r8_8[6].q = rdx_8
            
            if (result[i] == j_6)
                break
    
    sub_140a74f90(result)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_15e8)
return result
