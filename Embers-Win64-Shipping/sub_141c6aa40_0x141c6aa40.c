// 函数: sub_141c6aa40
// 地址: 0x141c6aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg1 + 0xab1) != 0)
    return 

int64_t* var_b8

if (sub_140a80ea0() == 0)
    void** const var_58_1 = &data_142e345d8
    var_b8 = arg1
    void* var_b0_1 = arg2
    int128_t var_50_1 = var_b8.o
    int64_t (* var_78)(int64_t* arg1) = sub_141c574b0
    int64_t var_68_1 = 0
    uint64_t var_40_1 = arg3.q
    sub_141e85cb0(&var_78, arg5)
    return 

int64_t rax_2 = 0
int64_t r13

while (true)
    if (arg2 == *(arg1[0xfa] + (rax_2 << 3)))
        r13.b = 1
        break
    
    rax_2 += 1
    
    if (rax_2 s>= 3)
        r13.b = 0
        void* rax_3 = sub_1425a1a30()
        void* rdx_1 = *(arg2 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
            int64_t r8_1 = *(arg2 + 0x38)
            
            if (r8_1 != 0)
                void var_98
                int64_t* rax_6 = sub_141c5eea0(arg1, &var_98, r8_1)
                int64_t var_c8_1 = 0
                int64_t* var_c0
                sub_141c4d620(&var_c0, &rax_6[1])
                int64_t* rbx_2 = var_c0
                
                if (rbx_2 != 0)
                    var_c8_1 = *rax_6
                    *rax_6 = 0
                
                int64_t* var_90
                
                if (var_90 != 0)
                    int32_t rax_7 = *(var_90 + 0xc)
                    *(var_90 + 0xc) -= 1
                    
                    if (rax_7 == 1 && var_90 != 0)
                        (*(*var_90 + 8))(var_90, 1)
                    
                    rbx_2 = var_c0
                
                if (var_c8_1 == 0)
                    (*(*arg1 + 0x58))(arg1, *(arg2 + 0x38), zx.q(arg3))
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        int64_t* rbx_3 = var_c0
                        (**rbx_3)(rbx_3)
                        int32_t rax_12 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_12 == 1)
                            int64_t* rcx_9 = var_c0
                            (*(*rcx_9 + 8))(rcx_9, 1)
        
        arg4 = sub_141c64a30(arg1, arg2)
        break

void var_88
int64_t* rax_14 = sub_141c5eea0(arg1, &var_88, arg2)
int64_t var_d8 = 0
int64_t* var_d0
sub_141c4d620(&var_d0, &rax_14[1])
int64_t* rbx_4 = var_d0

if (rbx_4 != 0)
    var_d8 = *rax_14
    *rax_14 = 0

int64_t* var_80
int32_t rax

if (var_80 != 0)
    rax = *(var_80 + 0xc)
    *(var_80 + 0xc) -= 1
    
    if (rax == 1 && var_80 != 0)
        (*(*var_80 + 8))(var_80, 1)
    
    rbx_4 = var_d0

if (r13.b == 0)
    rax, arg4 = sub_141c6a730(arg1, arg2, &var_d8, arg4)

if (arg3 != 0)
    var_b8.o = var_d8.o
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
        rbx_4 = var_d0
    
    sub_141c62780(arg1, arg2, &var_b8, 1, arg4)

if (rbx_4 == 0)
    return 

rbx_4[1].d -= 1

if (rbx_4[1].d != 1)
    return 

int64_t* rbx_5 = var_d0
(**rbx_5)(rbx_5)
int32_t rdi_1 = *(rbx_5 + 0xc)
*(rbx_5 + 0xc) -= 1

if (rdi_1 == 1)
    int64_t* rcx_18 = var_d0
    (*(*rcx_18 + 8))(rcx_18, zx.q(rdi_1))
