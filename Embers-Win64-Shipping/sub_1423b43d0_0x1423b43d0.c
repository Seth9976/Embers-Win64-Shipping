// 函数: sub_1423b43d0
// 地址: 0x1423b43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rdi = *(arg1 + 0x20)
void* rbp = nullptr
int64_t r12 = sx.q(arg2)
int64_t rbx = r12 * 5
*arg3 = *(rdi + (rbx << 3) + 0x24)
*arg4 = *(rdi + (rbx << 3) + 0x10)

if (*(arg1 + 0x88) != *(arg1 + 0xb4))
    int32_t r14_1 = *(rdi + (rbx << 3) + 0x10)
    char r12_1 = *(rdi + (rbx << 3) + 0x18)
    int128_t zmm6 = *(rdi + (rbx << 3) + 0x14)
    int32_t arg_8
    sub_1405ba560(arg1 + 0x80, &arg_8, *(rdi + (rbx << 3) + 8))
    int64_t rax_3 = sx.q(arg_8)
    
    if (rax_3.d != 0xffffffff)
        rbp = (rax_3 << 5) + *(arg1 + 0x80)
    
    int32_t* r11_1 = *(rbp + 8)
    uint64_t r10_1 = sx.q(*(rbp + 0x10))
    int32_t* rdx_1 = r11_1
    void* rax_4 = &r11_1[r10_1 * 3]
    
    if (r11_1 != rax_4)
        do
            if (*rdx_1 == r14_1 && not(zmm6.d f!= rdx_1[1]) && rdx_1[2].b == r12_1)
                int32_t r9_2 = ((rdx_1 - r11_1) s/ 0xc).d
                
                if (r9_2 != 0xffffffff)
                    int32_t rcx_4 = r10_1.d - r9_2 - 1
                    
                    if (rcx_4 s>= 1)
                        rcx_4 = 1
                    
                    if (rcx_4 != 0)
                        memcpy(&r11_1[sx.q(r9_2) * 3], &r11_1[sx.q(r10_1.d - rcx_4) * 3], 
                            rcx_4 * 0xc)
                        r10_1 = zx.q(*(rbp + 0x10))
                    
                    *(rbp + 0x10) = (r10_1 - 1).d
                
                break
            
            rdx_1 = &rdx_1[3]
        while (rdx_1 != rax_4)
    
    if (not(0f f<= *(rdi + (rbx << 3) + 0x14)))
        void* rcx_8 = *(rdi + (rbx << 3) + 8)
        
        if (rcx_8 != 0 && sub_14239f230(rcx_8) == 0)
            sub_140865c40(arg1 + 0xd0, &arg_8, *(rdi + (rbx << 3) + 8))
            int64_t rax_13 = sx.q(arg_8)
            void* const rcx_10
            
            if (rax_13.d == 0xffffffff)
                rcx_10 = nullptr
            else
                rcx_10 = *(arg1 + 0xd0) + rax_13 * 0x18
            
            int32_t temp0_1 = *(rcx_10 + 8)
            *(rcx_10 + 8) -= 1
            
            if (temp0_1 == 1)
                sub_140868c90(arg1 + 0xd0, *(rdi + (rbx << 3) + 8))
    
    r12 = zx.q(arg_10)

int64_t rdx_8 = *(rdi + (rbx << 3) + 8)

if (rdx_8 != 0)
    int64_t rax_15 = sx.q(*(rdi + (rbx << 3) + 0x1c))
    
    if (rax_15.d != 0xffffffff)
        *(*(arg1 + 0x20) + rax_15 * 0x28 + 0x20) = *(rdi + (rbx << 3) + 0x20)
        int64_t rax_23 = sx.q(*(rdi + (rbx << 3) + 0x20))
        
        if (rax_23.d != 0xffffffff)
            *(*(arg1 + 0x20) + rax_23 * 0x28 + 0x1c) = *(rdi + (rbx << 3) + 0x1c)
    else
        int32_t rbp_3 = *(rdi + (rbx << 3) + 0x20)
        
        if (rbp_3 == rax_15.d)
            sub_140868c90(arg1 + 0x30, rdx_8)
            sub_1408fa6d0(arg1 + 0x80, *(rdi + (rbx << 3) + 8))
            *arg5 = *(rdi + (rbx << 3) + 8)
        else
            sub_140865c40(arg1 + 0x30, &arg_10, rdx_8)
            int64_t rax_16 = sx.q(arg_10)
            void* const rcx_13
            
            if (rax_16.d == 0xffffffff)
                rcx_13 = nullptr
            else
                rcx_13 = *(arg1 + 0x30) + rax_16 * 0x18
            
            int32_t* rax_18 = rcx_13 + 8
            
            if (rcx_13 == 0)
                rax_18 = nullptr
            
            *rax_18 = rbp_3
            *(*(arg1 + 0x20) + sx.q(*(rdi + (rbx << 3) + 0x20)) * 0x28 + 0x1c) = 0xffffffff

int32_t rax_26 = *(arg1 + 0x150) + 1

if (rax_26 == *(arg1 + 0x28))
    bool cond:0 = *(arg1 + 0x2c) == 0
    *(arg1 + 0x28) = 0
    
    if (not(cond:0))
        rax_26 = sub_1405c5660(arg1 + 0x20, 0)
    
    bool cond:2 = *(arg1 + 0x154) == 0
    *(arg1 + 0x150) = 0
    
    if (cond:2)
        return rax_26
    
    return sub_1405dadb0(arg1 + 0x148, 0)

int64_t rbp_4 = sx.q(*(arg1 + 0x150))
int32_t rax_27 = (rbp_4 + 1).d
*(arg1 + 0x150) = rax_27

if (rax_27 s> *(arg1 + 0x154))
    sub_1405a4cf0(arg1 + 0x148)

int64_t rax_28 = *(arg1 + 0x148)
int32_t var_74 = 0
*(rax_28 + (rbp_4 << 2)) = r12.d
*(rdi + (rbx << 3)) = zx.o(0)
int32_t var_64 = 0xffffffff
*(rdi + (rbx << 3) + 0x10) = 0xffffffff.o
*(rdi + (rbx << 3) + 0x20) = -1
return rax_28
