// 函数: sub_140905880
// 地址: 0x140905880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 8)
int128_t var_20
__builtin_memset(&var_20, 0, 0x18)
int64_t* var_48
int64_t rdx
int512_t zmm0
rdx, zmm0 = sub_140903d10(&var_48, arg2, r8, &var_20, &arg3[3])
int64_t* rcx_1 = var_48
int64_t* rdi

if (rcx_1 != 0)
    zmm0.o = zx.o(0)
    int128_t var_38
    __builtin_memset(&var_38, 0, 0x18)
    rdx.b = 1
    
    if ((*(*rcx_1 + 0x20))(zmm0, rdx, 8, &var_38) != 0)
        int64_t rbx_1 = var_38:8.q
        int64_t rax_3 = sub_140a82f30(rbx_1, 0)
        memcpy(rax_3, var_38.q, rbx_1.d)
        void*** rax_4 = j_sub_140a82f30(0x18)
        void*** rbx_2 = rax_4
        
        if (rax_4 == 0)
            rbx_2 = nullptr
        else
            rax_4[1].d = 1
            *(rax_4 + 0xc) = 1
            *rbx_2 = &data_142e1b2c0
            rbx_2[2] = rax_3
        
        int64_t var_58 = rax_3
        void*** var_50 = rbx_2
        
        if (arg3 != &var_58)
            *arg3 = rax_3
            var_58 = 0
            sub_1405aeff0(&arg3[1], &var_50)
            rbx_2 = var_50
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rsi_2 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rsi_2 == 1)
                    (*rbx_2)[1](rbx_2, zx.q(rsi_2))
        
        arg3[0xb].d = arg3[5].d << 2
        arg3[2].d = 2
        rdi.b = 1
    else
        rdi.b = 0
    
    int64_t rcx_7 = var_38.q
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else
    rdi.b = 0

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp2_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *var_40
            (*(r8_2 + 8))(var_40, 1, r8_2)

int64_t rcx_10 = var_20.q

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return zx.q(rdi.b)
