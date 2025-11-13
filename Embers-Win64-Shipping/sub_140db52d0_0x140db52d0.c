// 函数: sub_140db52d0
// 地址: 0x140db52d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) == 0)
    return 

int64_t* rsi_1 = data_143e20d08
void arg_18
int32_t* rax_2 = (*(*rsi_1 + 0x68))(rsi_1, &arg_18)
int128_t zmm6
zmm6.d = rax_2[1].d f+ *(arg2 + 0x1c)
int128_t zmm7
zmm7.d = (*(arg2 + 0x18)).d f+ *rax_2
int32_t arg_c = zmm6.d
int32_t arg_8 = zmm7.d
int64_t* rax_3 = sub_140e15940(*(arg1 + 0x20), &arg_18)

if (zmm7.d f!= *rax_3 || not(zmm6.d f== *(rax_3 + 4)))
    void* rcx_2 = *(arg1 + 0x20)
    int64_t rbx_1 = *rsi_1
    int32_t var_48 = zmm7.d
    int32_t var_44_1 = zmm6.d
    int32_t var_40_1 = zmm7.d
    int32_t var_3c_1 = zmm6.d
    void arg_20
    int32_t* rax_5 = (*(rbx_1 + 0x100))(rsi_1, &arg_20, &var_48, sub_140e13cf0(rcx_2, &arg_18), 0)
    arg_8 = *rax_5
    arg_c = rax_5[1]

sub_140e1c780(*(arg1 + 0x20), arg_8.q)
