// 函数: sub_140e13900
// 地址: 0x140e13900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e24b28 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24b28)
    
    if (data_143e24b28 == 0xffffffff)
        atexit(sub_142ccada0)
        _Init_thread_footer(&data_143e24b28)

int64_t result = data_143e24b18

if (result != 0)
    return result

void*** rax_2 = j_sub_140a82f30(0x268)
void*** rdi_1

if (rax_2 == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_140ddd1b0(rax_2)

void*** rax_4 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi_1

void*** var_60_1 = rbx_1
data_143e24b18 = rdi_1
int64_t* rdi_2 = data_143e24b20
int64_t var_68_1 = 0

if (rbx_1 == rdi_2)
label_140e13a0b:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    data_143e24b20 = rbx_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp4_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_1 = nullptr
        goto label_140e13a0b

void var_58
sub_140d962e0(data_143e24b18 + 8, sub_140e14a10(&var_58, 0xa))
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp5_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return data_143e24b18
