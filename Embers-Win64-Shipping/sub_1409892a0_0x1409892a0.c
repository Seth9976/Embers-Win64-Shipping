// 函数: sub_1409892a0
// 地址: 0x1409892a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = 0
int64_t var_90 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t var_14 = zx.o(0).d
void** const var_88 = &data_142e259e0
int128_t var_58
__builtin_memset(&var_58, 0, 0x41)
void** const var_60 = &data_142e259e0
int64_t var_80
__builtin_memset(&var_80, 0, 0x20)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_3 != 0
*(arg2 + 0x20) = rbx + rax_3

if ((*(*arg1 + 0x670))(arg1, &var_98, &var_88) != 0)
    (*(*arg1 + 0x678))(arg1, &var_98, &var_88)
else
    sub_140be4120(u"ServerReservationRequest_Validate")

void** result = remapper::~remapper(&var_60)
var_88 = &data_142e259e0
int64_t var_70

if (var_70 != 0)
    result = sub_140a74f90(var_70)

int64_t* var_78

if (var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        result = (**var_78)(var_78)
        int32_t temp1_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_78 + 8))(var_78, 1)

int64_t rcx_8 = var_98

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
