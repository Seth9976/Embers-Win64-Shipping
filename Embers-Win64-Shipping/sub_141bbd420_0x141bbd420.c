// 函数: sub_141bbd420
// 地址: 0x141bbd420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg2 + 0x70)

if (rsi == 0)
    return 

int64_t rbx_1 = *rsi
sub_141bb1400()

if ((*(rbx_1 + 0x58))(rsi, &data_143f31920).b == 0)
    return 

int64_t* rbx_2 = *(arg2 + 0x78)
void* rsi_1 = *(arg2 + 0x70)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (rsi_1 != 0)
    uint64_t rax = *(arg1 + 0x3a0)
    
    if (rax != 0)
        int32_t rax_1 = *(rax + 0xc)
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_1)
            uint32_t rdx_1 = zx.d(temp2_1)
            int32_t rax_3 = temp3_1 + rdx_1
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (((*(rax_8 + 8) u>> 0x1c).b & 1) == 0)
            char arg_10 = 0
            char* var_10_1 = &arg_10
            void*** (* var_18)() = sub_140884c50
            
            if (*(sub_140a756e0(&var_18, &data_14397f5f0) + 0x20) == 0)
                int64_t* rcx_6 = *(arg1 + 0x3a0)
                (*(*rcx_6 + 0x408))(rcx_6, arg2, *(rsi_1 + 0x58))

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
