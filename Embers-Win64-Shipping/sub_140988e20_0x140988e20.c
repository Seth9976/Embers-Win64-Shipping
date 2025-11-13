// 函数: sub_140988e20
// 地址: 0x140988e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_38 = &data_142e259e0
int128_t var_30
__builtin_memset(&var_30, 0, 0x20)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
char result = (*(*arg1 + 0x660))(arg1, &var_38)

if (result != 0)
    result = (*(*arg1 + 0x668))(arg1, &var_38)
else
    sub_140be4120(u"ServerCancelReservationRequest_Validate")

var_38 = &data_142e259e0
int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t* rbx_1 = var_30:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
