// 函数: sub_1419e5200
// 地址: 0x1419e5200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
int32_t i_5 = arg2
int32_t i_3 = 0
void* i = *(rax + 0x40)

for (void* r10_2 = (sx.q(*(rax + 0x48)) << 5) + i; i != r10_2; i += 0x20)
    void* rax_1 = *(i + 8)
    
    if (rax_1 != 0)
        if (*(rax_1 + 0x2bc) == 0 || *(rax_1 + 0x2bd) == 0)
            arg2.b = 0
        else
            arg2.b = 1
        
        if (arg2.b == arg3)
            int32_t i_4 = *(rax_1 + 0x2a0) + 1
            
            if (i_3 s>= i_4)
                i_4 = i_3
            
            i_3 = i_4

if (i_5 s>= 0)
    if (i_3 s<= i_5)
        i_5 = i_3
    
    i_3 = i_5

*(arg1 + 0xe0) = 0
*(arg1 + 0x14c) = arg3

if (i_3 s> 0)
    uint64_t i_2 = zx.q(i_3)
    uint64_t i_1
    
    do
        void* rcx = *(arg1 + 0x28)
        int32_t rax_3 = 0
        
        if (0 == *(rcx + 0x38))
            *(rcx + 0x38) = 0
        else
            rax_3 = *(rcx + 0x38)
        
        if (rax_3 == *(arg1 + 0x150))
            int64_t* var_48 = nullptr
            int32_t var_40_1 = 0
            
            if (*(arg1 + 0xe0) != 0)
                sub_1419e0910(arg1)
                sub_1419e6950(arg1, &var_48)
            else
                sub_1419dfe50(arg1, &var_48)
            
            int64_t rbp_1 = sx.q(var_40_1)
            int32_t rax_5 = *(arg1 + 0x88) - *(arg1 + 0xb4)
            int32_t rbx_1 = rax_5 + rbp_1.d
            
            if (rbx_1 s> rax_5)
                sub_1410339f0(arg1 + 0x80, rbx_1)
                int32_t rdx_4
                
                if (rbx_1 u< 4)
                    rdx_4 = 1
                else
                    uint32_t rbx_2 = rbx_1 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
                    int32_t arg_18 = temp0_1
                    int32_t rcx_4
                    
                    if (rbx_2 == 0xfffffff8)
                        rcx_4 = 0x20
                    else
                        rcx_4 = 0x1f - temp0_1
                    
                    int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
                    uint64_t rflags_2
                    int32_t temp0_2
                    temp0_2, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
                    int32_t arg_10 = temp0_2
                    char rdx_3
                    
                    if (rcx_6 == 0)
                        rdx_3 = 0x20
                    else
                        rdx_3 = 0x1f - temp0_2.b
                    
                    rdx_4 = 1 << ((not.d(rcx_6)).b & (0x20 - rdx_3))
                
                int32_t rax_9 = *(arg1 + 0xc8)
                
                if (rax_9 == 0 || rax_9 s< rdx_4)
                    *(arg1 + 0xc8) = rdx_4
                    sub_1408370c0(arg1 + 0x80)
            
            int64_t* r14_1 = var_48
            int64_t* rbx_4 = r14_1
            void* rbp_2 = &r14_1[rbp_1]
            
            if (r14_1 != rbp_2)
                do
                    int32_t arg_8
                    sub_140b91690(arg1 + 0x80, &arg_8, rbx_4, nullptr)
                    rbx_4 = &rbx_4[1]
                while (rbx_4 != rbp_2)
            
            sub_1419e19e0(arg1)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
        
        *(arg1 + 0xe0) += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return sub_1419e3570(arg1) __tailcall
