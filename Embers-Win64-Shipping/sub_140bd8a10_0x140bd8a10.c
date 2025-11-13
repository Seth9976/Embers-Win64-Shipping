// 函数: sub_140bd8a10
// 地址: 0x140bd8a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_28)
int32_t r8 = data_143e1d9b4
int32_t rbx = 0

if (r8 s> 0)
    int32_t rax_7
    
    do
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        int64_t* rdi_1 =
            *(*(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18)
        
        if (rdi_1 != 0)
            while (true)
                void* rax_8 = sub_140bdf2e0()
                void* rdx_4 = rdi_1[2]
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s<= *(rdx_4 + 0x38)
                        && *(*(rdx_4 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                    if (data_143de5444 == 0 && rdi_1[0x23] == 0)
                        (*(*rdi_1 + 0x390))(rdi_1)
                    
                    if (((rdi_1[1].d u>> 4).b & 1) == 0 && ((*(rdi_1 + 0xcc) u>> 0x16).b & 1) == 0)
                        sub_140cb0360(rdi_1, 0)
                
                int32_t r8_2 = data_143e1d9b4
                int32_t rax_16 = rbx + 1
                rbx = rax_16
                
                if (rax_16 s>= r8_2)
                    break
                
                while (true)
                    uint32_t rcx_8 = zx.d(rbx.w)
                    int32_t rax_17 = rbx
                    
                    if (rbx s< 0)
                        rax_17 = rbx + 0xffff
                        rcx_8 -= 0x10000
                    
                    rdi_1 = *(*(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3)) + sx.q(rcx_8) * 0x18)
                    
                    if (rdi_1 != 0)
                        break
                    
                    int32_t rax_21 = rbx + 1
                    rbx = rax_21
                    
                    if (rax_21 s>= r8_2)
                        return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                            &var_28)
            
            break
        
        rax_7 = rbx + 1
        rbx = rax_7
    while (rax_7 s< r8)

return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_28)
