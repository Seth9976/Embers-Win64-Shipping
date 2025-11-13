// 函数: sub_14208a840
// 地址: 0x14208a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1 = *(arg1 + 0xe0)
uint32_t result

if (result_1 != 0)
    result = zx.d(result_1)
else
    result = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

if (result != 2)
    result.b = 0
    return result

void* rax = sub_140cbe180(arg1)
int64_t* rcx_2

if (rax == 0)
    rcx_2 = nullptr
else
    rcx_2 = rax + 0x48

int32_t arg_8
(*(*rcx_2 + 0x18))(rcx_2, &arg_8)
int128_t var_28
__builtin_memset(&var_28, 0, 0x18)
char rax_2 = sub_142094d60(arg1, &var_28, zx.o(0))
j_sub_140b3db50()
void arg_18
int64_t rbx_1 = *sub_140b58260(&arg_18, u"ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_4 = j_sub_140b407e0(&data_143de7d78, rbx_1)
int64_t r9 = *rax_4
int64_t* var_38
(*(r9 + 0x40))(rax_4, &var_38, 0, r9)
int64_t* rcx_6 = var_38
int64_t var_18
(*(*rcx_6 + 8))(rcx_6, var_28.q, var_18, zx.q(arg_8), arg3, 1, 8)
int64_t* rcx_7 = var_38
int64_t* rax_7 = (*(*rcx_7 + 0x18))(rcx_7, 0x64)
int64_t r9_2 = *arg2
(*(r9_2 + 0x150))(arg2, *rax_7, rax_7[2], r9_2)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

if (var_28.q != 0)
    sub_140a74f90(var_28.q)

return zx.q(rax_2)
