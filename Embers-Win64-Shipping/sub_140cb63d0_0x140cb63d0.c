// 函数: sub_140cb63d0
// 地址: 0x140cb63d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void** const var_68 = &data_142d42d18
int32_t rdi = 0
void*** var_78 = nullptr
int64_t (* var_88)() = sub_140594850
void*** result_1
int512_t zmm1
int128_t zmm2
uint128_t zmm3
result_1, zmm1, zmm2, zmm3 = sub_140cb65f0(arg1, arg2, arg3, arg4 & 0xffefffff, arg5, arg6, &var_88)

if (var_88 != 0)
    void** const* rcx = &var_68
    
    if (var_78 != 0)
        rcx = var_78
    
    void** const rdx_1 = *rcx
    rdx_1[2](rcx, rdx_1)

int32_t rsi = result_1[0x52].d
result_1[0x52].d = rsi | (arg4 & 0x100000)

if (arg7 != 0)
    sub_140ccf2c0(result_1, arg7)
    sub_140ccde30(result_1)

int64_t rbx_2 = *(arg1 + 0x88)
*(arg1 + 0x88) = result_1
zmm1.o = zx.o(0)
int32_t rax_4 = sub_140ccfc30(result_1, zmm1, 0, 0, zmm2, zmm3, nullptr)
*(arg1 + 0x88) = rbx_2
result_1[0x52].d = rsi
void*** result

if (rax_4 != 0)
    void* rbp
    rbp.b = 0
    int32_t rdx_3 = data_1439aaa08
    int32_t rcx_5 = data_1439aaa14 + 1
    data_1439aaa14 = rcx_5
    int64_t rsi_1 = sx.q(rdx_3 - 1)
    
    if (rdx_3 - 1 s>= 0)
        int64_t rbx_4 = rsi_1 << 4
        int64_t temp0_1
        
        do
            int64_t rcx_6 = data_1439aaa00
            
            if (*(rbx_4 + rcx_6 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_7 = *(rbx_4 + rcx_6)
                
                if (rcx_7 == 0)
                    rbp.b = 1
                else if ((*(*rcx_7 + 0x50))(rcx_7, arg2) == 0)
                    rbp.b = 1
            
            rbx_4 -= 0x10
            temp0_1 = rsi_1
            rsi_1 -= 1
        while (temp0_1 - 1 s>= 0)
        rcx_5 = data_1439aaa14
        rdx_3 = data_1439aaa08
    
    data_1439aaa14 = rcx_5 - 1
    
    if (rbp.b != 0 && rcx_5 - 1 s<= 0)
        int32_t rsi_2 = rdx_3
        
        if (rdx_3 s> 0)
            int64_t* rbx_5 = nullptr
            
            do
                int64_t rcx_9 = data_1439aaa00
                
                if (*(rbx_5 + rcx_9 + 8) == 0)
                    sub_1405a4880(&data_1439aaa00, rdi, 1, 1)
                else
                    int64_t* rcx_10 = *(rbx_5 + rcx_9)
                    
                    if (rcx_10 == 0)
                        sub_1405a4880(&data_1439aaa00, rdi, 1, 1)
                    else if ((*(*rcx_10 + 0x20))(rcx_10) != 0)
                        sub_1405a4880(&data_1439aaa00, rdi, 1, 1)
                    else
                        rdi += 1
                        rbx_5 = &rbx_5[2]
                
                rdx_3 = data_1439aaa08
            while (rdi s< rdx_3)
        
        int32_t rax_10 = rdx_3 * 2
        
        if (rax_10 s<= 2)
            rax_10 = 2
        
        data_1439aaa10 = rax_10
        
        if (rsi_2 s> rax_10 && data_1439aaa0c != rdx_3)
            sub_1405a5410(&data_1439aaa00, rdx_3)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_b8)
return result
