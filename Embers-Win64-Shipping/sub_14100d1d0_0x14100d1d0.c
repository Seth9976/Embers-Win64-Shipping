// 函数: sub_14100d1d0
// 地址: 0x14100d1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
*arg1 = &data_142d3ff08
void* r8 = &arg1[0x18]
arg1[1].d = 0
*(arg1 + 0xc) = 0
void* rdx = r8 + 0x20
arg1[2].w = 0x100
int64_t i_2 = 4
arg1[3] = 0
int32_t r13 = -1
*arg1 = &data_142effb50
int32_t rbp = 1
__builtin_memset(&arg1[4], 0, 0x24)
__builtin_memset(&arg1[9], 0, 0x50)
arg1[0x13].d = 1
__builtin_memset(&arg1[0x14], 0, 0x1c)
*(arg1 + 0xbc) = 1
int64_t i

do
    *r8 = 0
    void* rcx = rdx - 0x10
    *(rdx - 0x18) = 0
    r8 += 0x50
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    void* rax_1 = *rdx
    rdx += 0x50
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    *(rcx + 8) = 0
    *(rdx - 0x40) = 0xffffffff
    *(rdx - 0x3c) = 0
    *(rdx - 0x30) = 0
    *(rdx - 0x28) = 0
    i = i_2
    i_2 -= 1
while (i != 1)
arg1[0x40].d = 0
arg1[0x41] = 0
void*** r12 = nullptr
void*** r15 = nullptr
int32_t r14 = 1 << (data_1439c7a34).b
int32_t i_3 = r14 - 1

if (r14 != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_3)
    int32_t rbp_1 = temp0_1
    int32_t arg_8 = rbp_1
    int32_t i_1
    
    do
        void* rdi_1 = *(arg2 + (zx.q(rbp_1) << 3) + 0x9d8)
        void*** rax_3 = j_sub_140a82f30(0xa8)
        void*** rdi_2
        
        if (rax_3 == 0)
            rdi_2 = nullptr
        else
            rdi_2 = sub_14100d6c0(rax_3, rdi_1)
        
        if (r15 != 0)
            sub_1405d16e0(&r15[0x12], rdi_2)
            
            if (rdi_2 != 0)
                rdi_2[0x13].b = 0
        else
            r12 = rdi_2
        
        r15 = rdi_2
        i_1 = not.d(1 << rbp_1.b) & i_3
        i_3 = i_1
        
        if (i_1 != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i_1)
            rbp_1 = temp0_2
            int32_t arg_18 = rbp_1
        else
            rbp_1 = 0x20
    while (i_1 != 0)
    
    rbp = i_1 + 1
    r13 = i_1 - 1

int64_t* rdi_3 = arg1[3]
arg1[3] = r12

if (r12 != 0)
    r12[1].d += 1

if (rdi_3 != 0)
    rdi_3[1].d += r13
    
    if (rdi_3[1].d == 1)
        char rax_7
        
        if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_7 = sub_1405949a0()
        
        if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
            (**rdi_3)(rdi_3, zx.q(rbp))
        else
            bool z_1
            
            if (0 == *(rdi_3 + 0xc))
                *(rdi_3 + 0xc) = rbp
                z_1 = true
            else
                *(rdi_3 + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_9 = sub_140a20af0()
                
                if (rax_9 != 0)
                    rbx = *(&data_143cf0bf8 + (zx.q(rax_9) u>> 0xe << 3))
                        + (zx.q(rax_9) & 0x3fff) * 0x18
                
                *(rbx + 8) = rdi_3
                sub_1405a42f0(&data_143f02390, rax_9)

return arg1
