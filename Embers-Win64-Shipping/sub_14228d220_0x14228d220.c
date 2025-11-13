// 函数: sub_14228d220
// 地址: 0x14228d220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2
int16_t* rax = nullptr
int32_t r8 = 0
void* rsi_2 = &rbx[sx.q(arg2[1].d) * 2]
int16_t* var_28 = nullptr
int32_t var_20 = 0
int64_t rdi
rdi.b = 1

if (rbx != rsi_2)
    do
        if (rdi.b == 0)
            sub_140a20ba0(&var_28, &data_142d404d4, 1)
        else
            rdi.b = 0
        
        int32_t rax_1 = rbx[1].d
        int32_t r8_1 = rax_1 - 1
        
        if (rax_1 == 0)
            r8_1 = 0
        
        sub_140a20ba0(&var_28, *rbx, r8_1)
        rbx = &rbx[2]
    while (rbx != rsi_2)
    
    r8 = var_20
    rax = var_28

int32_t arg_10 = 0
int64_t zmm0 = (zx.o(0)).q
int16_t* const rbx_1 = &data_142d40450
int16_t* const rcx_2 = &data_142d40450
int32_t arg_18 = zmm0.d

if (r8 != 0)
    rcx_2 = rax

sub_140b2ab20(rcx_2, u"size=", &arg_10)

if (var_20 != 0)
    rbx_1 = var_28

sub_140b2abf0(rbx_1, u"report=", &arg_18, zmm0)
int64_t result = sub_14229df60()
int16_t* rcx_4 = var_28

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
