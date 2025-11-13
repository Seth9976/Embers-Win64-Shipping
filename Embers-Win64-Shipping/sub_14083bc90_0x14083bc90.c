// 函数: sub_14083bc90
// 地址: 0x14083bc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = arg2
int32_t r12 = 0
int32_t r13 = 0

while (true)
    void* const* rax
    
    if (r13 s< 0 || r13 s>= *(arg1 + 0x18))
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b == 0)
        break
    
    int64_t rdx = *(arg1 + 0x10)
    int64_t rcx = sx.q(r13)
    r13 += 1
    int64_t rcx_1 = rcx << 5
    int64_t rax_1 = *(rcx_1 + rdx)
    int64_t* var_60 = *(rcx_1 + rdx + 8)
    int16_t rax_3 = *(rcx_1 + rdx + 0x10)
    int16_t var_56_1 = -1
    int64_t var_50_1 = 0
    int64_t var_48_1 = 0
    int64_t rbx_1 = sx.q(*(rdx + rcx_1 + 0x18))
    int32_t rcx_2
    rcx_2.b = sub_140b5b8a0(rax_1.d, 0).b == 0
    rax.b = rax_1:4.d != 0
    rax.b |= rcx_2.b
    
    if (rax.b == 0 || var_60 == 0)
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b != 0)
        if (sub_140834780(&var_60) == 0)
            int64_t* rdi_5
            
            if (rax_3 != 3)
                rdi_5 = var_60
                void* rax_8
                int64_t rax_9
                void* rdx_3
                
                if (rdi_5 != 0)
                    rax_8 = sub_140be01c0()
                    rdx_3 = rdi_5[2]
                    rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rdi_5 == 0 || rax_9.d s> *(rdx_3 + 0x38)
                        || *(*(rdx_3 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                    rdi_5 = nullptr
            else
                rdi_5 = data_143ce3880
            
            void* rax_11 = sub_140d41340()
            int64_t rax_12
            
            if (rax_11 != 0)
                rax_12 = sx.q(*(rax_11 + 0x38))
            
            if (rax_11 == 0 || rax_12.d s> rdi_5[7].d
                    || *(rdi_5[6] + (rax_12 << 3)) != rax_11 + 0x30)
                rax = zx.q(var_56_1)
                
                if (rax.w == 0xffff)
                    if (var_60 == 0 || rax_3 == 1)
                        rax = nullptr
                    else
                        void* rax_16 = sub_140761a70(&var_60)
                        int16_t rcx_12 = *(rax_16 + 0x5c)
                        rax.w = *(rax_16 + 0x58) - 1
                        rax.w += rcx_12
                        rax.w &= not.w(rcx_12 - 1)
                    
                    var_56_1 = rax.w
                
                int32_t rcx_14 = sx.d(rax.w) + rbx_1.d
                
                if (r12 s>= rcx_14)
                    rcx_14 = r12
                
                r12 = rcx_14
            else
                rax = zx.q(*(arg1 + 0x48))
                
                if (rax.d s<= rbx_1.d)
                    int64_t r14_2 = sx.q(rax.d)
                    int32_t rax_14 = r14_2.d + rbx_1.d - rax.d + 1
                    *(arg1 + 0x48) = rax_14
                    
                    if (rax_14 s> *(arg1 + 0x4c))
                        sub_1405a4d70(arg1 + 0x40)
                    
                    memset(*(arg1 + 0x40) + (r14_2 << 3), 0, sx.q(rbx_1.d - rax.d + 1) << 3)
        else
            int32_t rax_5 = *(arg1 + 0x38)
            
            if (rax_5 s<= rbx_1.d)
                int64_t r15_1 = sx.q(*(arg1 + 0x38))
                int32_t rax_6 = r15_1.d + rbx_1.d - rax_5 + 1
                *(arg1 + 0x38) = rax_6
                
                if (rax_6 s> *(arg1 + 0x3c))
                    sub_1405a4d70(arg1 + 0x30)
                
                memset(*(arg1 + 0x30) + (r15_1 << 3), 0, sx.q(rbx_1.d - rax_5 + 1) << 3)
                r14 = arg2
            
            void*** rdi_4 = *(arg1 + 0x30)
            
            if (rdi_4[rbx_1] == 0 && r14 != 0)
                void* rcx_6 = *(arg1 + 8)
                
                if (rcx_6 != 0)
                    int64_t* rdx_2 = nullptr
                    
                    if (rax_3 == 1)
                        rdx_2 = var_60
                    
                    rdi_4[rbx_1] = sub_140596910(rcx_6, rdx_2, 0, 9, 0, 0, 0)
    
    r14 = arg2
    
    if (var_50_1 != 0)
        sub_140a74f90(var_50_1)

int32_t result = *(arg1 + 0x28)

if (result s>= r12)
    return result

int64_t rbx_5 = sx.q(*(arg1 + 0x28))
int32_t r12_1 = r12 - result
int32_t rax_17 = r12_1 + rbx_5.d
*(arg1 + 0x28) = rax_17

if (rax_17 s> *(arg1 + 0x2c))
    sub_1405daba0(arg1 + 0x20)

return memset(rbx_5 + *(arg1 + 0x20), 0, sx.q(r12_1))
