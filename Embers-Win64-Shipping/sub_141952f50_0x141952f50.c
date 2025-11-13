// 函数: sub_141952f50
// 地址: 0x141952f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
void* rbx = *rax

if ((data_1439c74e9 != 0 && data_1439c74f0 != 0) || (*(rbx + 0x1c) & 0x800) == 0)
    if (data_143f00360 != 0 && data_1439c78e0 != 0)
        int32_t arg_8
        rax = sub_140865c40(&data_1439c7940, &arg_8, rbx)
        int64_t rdx_2 = sx.q(arg_8)
        
        if (rdx_2.d != 0xffffffff)
            int64_t r9_1 = data_1439c7940
            void* r10 = r9_1 + rdx_2 * 0x18
            void* rdi = *(r10 + 8)
            
            if (data_1439c7948 != data_1439c7974)
                void* rcx_1 = data_1439c7980
                int64_t r8_3 = sx.q(data_1439c7988 - 1) & sx.q(*(r10 + 0x14))
                void* rax_5 = &data_1439c7978
                
                if (rcx_1 != 0)
                    rax_5 = rcx_1
                
                void* rcx_2 = rax_5 + (r8_3 << 2)
                int32_t i = *(rax_5 + (r8_3 << 2))
                
                while (i != 0xffffffff)
                    if (i == rdx_2.d)
                        *rcx_2 = *(r10 + 0x10)
                        break
                    
                    int64_t i_1 = sx.q(i)
                    int64_t rcx_4 = i_1 + ((i_1 + 1) << 1)
                    i = *(r9_1 + (rcx_4 << 3))
                    rcx_2 = r9_1 + (rcx_4 << 3)
            
            sub_1405c3640(&data_1439c7940, rdx_2.d, 1)
            sub_141909ed0(*(rbx + 0x28))
            int32_t rax_7 = *(rdi + 0xc)
            data_143f001b0(0x8f36, 0x8892, (zx.q(rax_7) u>> 0x18) - data_143eff980 + *rdi, 
                zx.q(rax_7) & 0xffffff, zx.q(*(rdi + 8)))
            int32_t rax_8 = data_14399fa54
            *(rdi + 0x10) = rax_8
            return rax_8
    
    if ((*(rbx + 0x38) & 1) != 0)
        sub_141909ed0(*(rbx + 0x28))
        
        if (data_143eff5d0 != 0 || (*(rbx + 0x38) & 2) != 0)
            rax = data_143effd20(0x8892)
        else
            sub_1419104e0(rbx, *(rbx + 0x40), *(rbx + 0x3c), *(rbx + 0x48))
            
            if ((*(rbx + 0x1c) & 4) == 0)
                rax = sub_140a74f90(*(rbx + 0x48))
                *(rbx + 0x38) &= 0xfffffff7
                *(rbx + 0x3c) = 0
            else
                int64_t rcx_9 = *(rbx + 0x50)
                int32_t rcx_10
                
                if (rcx_9 == 0)
                    rcx_10 = *(rbx + 0x58)
                else
                    sub_140a74f90(rcx_9)
                    rcx_10 = 0
                
                *(rbx + 0x50) = *(rbx + 0x48)
                rax = zx.q(*(rbx + 0x3c))
                *(rbx + 0x3c) = 0
                
                if (rcx_10 u>= rax.d)
                    rax = zx.q(rcx_10)
                
                *(rbx + 0x38) &= 0xfffffff7
                *(rbx + 0x58) = rax.d
        
        *(rbx + 0x48) = 0
        int32_t rdx_4 = *(rbx + 0x38)
        *(rbx + 0x30) += zx.q(not.d(rdx_4 u>> 1)) & 1
        *(rbx + 0x38) = rdx_4 & 0xfffffffe

return rax
