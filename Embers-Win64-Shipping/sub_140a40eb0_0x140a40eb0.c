// 函数: sub_140a40eb0
// 地址: 0x140a40eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if ((**arg6)(arg6, (zx.o(0)).d) == 0)
    return 2

int32_t rax_2 = 0
int64_t rsi = -1
int16_t* r12 = nullptr
int32_t r14 = 0
int16_t* var_60 = nullptr
int64_t var_58 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_60, rdi_1.d + 1)
        rax_2 = var_58:4.d
        r14 = var_58.d
        r12 = var_60
    
    r14 += rdi_1.d + 1
    var_58.d = r14
    
    if (r14 s> rax_2)
        sub_140594770(&var_60)
        r14 = var_58.d
        r12 = var_60
    
    memcpy(r12, arg3, (rdi_1.d + 1) * 2)

int16_t* var_70 = nullptr
int16_t* rbp_1 = nullptr
int64_t var_68 = 0
int32_t r13 = 0
int32_t rax_3 = 0

if (arg2 != 0 && *arg2 != 0)
    do
        rsi += 1
    while (arg2[rsi] != 0)
    
    if (rsi.d + 1 s> 0)
        sub_1405947f0(&var_70, rsi.d + 1)
        rax_3 = var_68:4.d
        rbp_1 = var_70
        r13 = var_68.d
    
    r13 += rsi.d + 1
    var_68.d = r13
    
    if (r13 s> rax_3)
        sub_140594770(&var_70)
        rbp_1 = var_70
        r13 = var_68.d
    
    memcpy(rbp_1, arg2, (rsi.d + 1) * 2)

int16_t* const rdx_6 = &data_142d40450

if (r14 != 0)
    rdx_6 = r12

int64_t* rax_5 = (*(*arg1 + 0x18))(arg1, rdx_6, zx.q(arg7))

if (rax_5 != 0)
    int16_t* const rdx_7 = &data_142d40450
    int64_t r9 = *arg1
    
    if (r13 != 0)
        rdx_7 = rbp_1
    
    int64_t* rax_8 = (*(r9 + 0x20))(arg1, rdx_7, 
        zx.q((zx.d(arg4) ^ 1) * 2) | zx.q(zx.d(arg5) << 2) | zx.q(arg8), r9)
    
    if (rax_8 != 0)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int64_t rax_10 = (*(*rax_5 + 0x28))(rax_5)
        int64_t var_80_1 = 0
        int64_t rax_11 = j_sub_140a82f30(0x8000)
        int64_t rcx_10 = rax_11
        int64_t r12_1 = 0
        
        if (rax_10 s> 0)
            int64_t r13_1 = 0
            int64_t rbp_2 = rax_10
            
            while (true)
                int64_t rsi_4 = 8
                
                if (rbp_2 s<= 8)
                    rsi_4 = rbp_2
                
                (*(*rax_5 + 0x150))(rax_5, rcx_10, rsi_4)
                
                if ((*(rax_5 + 0x29) & 1) == 0)
                    (*(*rax_8 + 0x150))(rax_8, rax_11, rsi_4)
                
                if ((*(rax_5 + 0x29) & 1) != 0 || (*(rax_8 + 0x29) & 1) != 0)
                    rcx_10 = rax_11
                    rbx = 1
                else
                    int64_t temp0_1 = divs.dp.q(sx.o(r13_1), rax_10)
                    
                    if (var_80_1 != temp0_1
                            && (**arg6)(arg6, float.s(temp0_1) f* 0.00999999978f) == 0)
                        rbp_1 = var_70
                        r13 = var_68.d
                        rbx = 2
                        rcx_10 = rax_11
                        break
                    
                    rcx_10 = rax_11
                    r12_1 += 8
                    rbp_2 -= 8
                    var_80_1 = temp0_1
                    r13_1 += 0x320
                    
                    if (r12_1 s< rax_10)
                        continue
                
                rbp_1 = var_70
                r13 = var_68.d
                break
        
        j_sub_140a74f90(rcx_10)
        
        if (rbx == 0 && (*(*rax_8 + 0x1b8))(rax_8) == 0)
            rbx = 1
        
        (**rax_8)(rax_8, 1)
        
        if (rbx == 0)
            if ((*(*rax_5 + 0x1b8))(rax_5) == 0)
                rbx = 1
        else
            int16_t* rdx_13 = &data_142d40450
            
            if (r13 != 0)
                rdx_13 = rbp_1
            
            (*(*arg1 + 0x30))(arg1, rdx_13, 0, 0, 0)
        
        r12 = var_60
    else
        rbx = 1
    
    (**rax_5)(rax_5, 1)
    
    if (rbx == 0 && (**arg6)(arg6, 0x3f800000) == 0)
        rbx = 2
else
    rbx = (rax_5 + 1).d

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx)
