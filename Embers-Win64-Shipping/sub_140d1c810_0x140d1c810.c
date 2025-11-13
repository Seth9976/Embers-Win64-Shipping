// 函数: sub_140d1c810
// 地址: 0x140d1c810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* result = *arg1

if (result == 0 || (*(result + 0xcc) & 0x20000000) == 0)
    int64_t rbx_1 = *(arg2 + 0x18)
    int64_t rdi_1 = 0
    int64_t r14_1 = sx.q(*(arg2 + 0x38)) << 3
    uint64_t r14_2 = r14_1 u>> 3
    
    if (rbx_1 u> r14_1 + rbx_1)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            (*rbx_1)()
            rdi_1 += 1
            rbx_1 += 8
        while (rdi_1 != r14_2)
    
    int64_t rdx
    result, rdx = (*arg2)()
    *arg1 = result
    
    if ((*(result + 0xcc) & 0x20000000) == 0)
        rdx.b = 1
        sub_140d315a0(result)
        void* rax_4 = result[8]
        
        if (rax_4 != 0)
            *(result + 0xcc) |= *(rax_4 + 0xcc) & 0x4aa1060e
        
        *(result + 0xcc) |= *(arg2 + 0x48) | 0x20000000
        
        if ((*(result + 0xcc) & 0x10000000) == 0)
            result[0x3e].d = 0
            
            if (*(result + 0x1f4) != 0)
                sub_1405dadb0(&result[0x3d], 0)
        
        sub_140bda4e0(result, *(arg2 + 0x20), *(arg2 + 0x3c))
        int32_t i_2 = *(arg2 + 0x40)
        int64_t var_180 = *(arg2 + 0x28)
        int32_t i = i_2
        
        if (i_2 != 0)
            do
                char var_170_1 = 1
                int128_t var_168 = result.o
                sub_140d1ac90(&var_168, &var_180, &i)
            while (i != 0)
        
        char* rdx_3 = *(arg2 + 8)
        
        if (rdx_3 != 0)
            void var_158
            result[0x1d] = *sub_140b58260(&var_180, *(sub_14060c4d0(&var_158, rdx_3) + 0x108), 1)
            int64_t var_58
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
        
        int64_t rbp_1 = sx.q(*(arg2 + 0x44))
        
        if (rbp_1.d != 0)
            if (rbp_1.d s> *(result + 0x1e4))
                sub_1405a5410(&result[0x3b], rbp_1.d)
            
            int64_t* i_1 = *(arg2 + 0x30)
            
            while (i_1 != &i_1[rbp_1 * 2])
                int64_t rax_12 = *i_1
                int64_t r14_3
                
                if (rax_12 == 0)
                    r14_3 = 0
                else
                    r14_3 = rax_12()
                
                int64_t rbp_2 = sx.q(result[0x3c].d)
                int32_t rax_14 = (rbp_2 + 1).d
                result[0x3c].d = rax_14
                
                if (rax_14 s> *(result + 0x1e4))
                    sub_1405a4f90(&result[0x3b])
                
                char rcx_10 = *(i_1 + 0xc)
                int32_t rax_15 = i_1[1].d
                i_1 = &i_1[2]
                int64_t* rdx_9 = (rbp_2 << 4) + result[0x3b]
                *rdx_9 = r14_3
                rdx_9[1].d = rax_15
                *(rdx_9 + 0xc) = rcx_10
        
        sub_140ca8970(result, 0)
        result = sub_140ca8230(result, sub_140be0b90(result))

__security_check_cookie(rax_1 ^ &var_1a8)
return result
