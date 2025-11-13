// 函数: sub_1408970f0
// 地址: 0x1408970f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rdx = data_143ce9d20

if (rdx != 0)
    sub_142832a50(data_143cea5b8, rdx)

void* rdx_2 = nullptr
void* var_38 = nullptr
int16_t* rbx_1

if (arg1[1].d == 0)
    rbx_1 = &data_142d40450
label_140897160:
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (rbx_1[rax_2] != 0)
    
    int32_t rdi_1 = (rax_2 + 1).d
    int32_t var_28_1 = rax_2.d
    
    if (rdi_1 u> 0x80 && rdi_1 != 0)
        void* rax_3 = sub_140a84c80(0, sx.q(rdi_1), 0)
        rdx_2 = rax_3
        var_38 = rax_3
    
    void var_b8
    void* rcx_1 = &var_b8
    
    if (rdx_2 != 0)
        rcx_1 = rdx_2
    
    sub_14060abb0(rcx_1, rdi_1, rbx_1, rdi_1, 0x3f)
    rdx_2 = rcx_1
else
    rbx_1 = *arg1
    
    if (rbx_1 != 0)
        goto label_140897160
    
    int64_t var_30 = 0
    int32_t var_28 = 0
int32_t rbx_2 = sub_142832f44(data_143cea5b8, rdx_2, 1)

if (var_38 != 0)
    sub_140a74f90(var_38)

int32_t result

if (rbx_2 s>= 0)
    void* rax_4 = sub_142831ec0(data_143cea5b8, rbx_2)
    int32_t* rcx_5 = data_143cea5b0
    data_143ce9d20 = rax_4
    sub_1428310f0(rcx_5, "audio.driver", "sdl2")
    sub_14089ae20(0)
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
