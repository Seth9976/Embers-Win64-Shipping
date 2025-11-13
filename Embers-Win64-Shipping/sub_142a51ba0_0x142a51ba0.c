// 函数: sub_142a51ba0
// 地址: 0x142a51ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (data_1440155c0 != 2 && sub_142a85f00(&data_1440155c0) != 0)
    sub_142a51a30()
    sub_142a85e80(&data_1440155c0)

int64_t rbx = sx.q(data_1440155b4)
data_1440155a8 = rbx.d
void (* rdi)()

if (rbx.d == 0)
    rdi = data_1440155a0
else
    int64_t* rax_2
    
    if (rbx != 0)
        int64_t rax_3 = 0xe0 * rbx
        
        if (mulu.dp.q(0xe0, rbx) u>> 0x40 != zx.o(0))
            rax_3 = -1
        
        uint64_t rax_4 = rax_3 + 8
        
        if (rax_3 u>= -8)
            rax_4 = -1
        
        rax_2 = j_sub_142a7dd00(rax_4)
    else
        rax_2 = j_sub_140a82f30(8)
    
    int64_t* arg_8 = rax_2
    
    if (rax_2 == 0)
        rdi = nullptr
    else
        *rax_2 = rbx
        rdi = &rax_2[1]
        int64_t (* var_28_1)(struct icu_64::UObject::icu_64::Locale::VTable** arg1) = sub_142a45a20
        `eh vector constructor iterator'(rdi, 0xe0, rbx)
    
    data_1440155a0 = rdi
    rbx = zx.q(data_1440155a8)

if (rdi == 0)
    rbx = 0

data_1440155a8 = rbx.d
int32_t rbx_1 = rbx.d - 1

if (rbx.d - 1 s>= 0)
    int64_t rax_5 = sx.q(rbx_1)
    int64_t rdi_1 = rax_5 << 3
    int64_t rsi_1 = rax_5 * 0xe0
    int32_t temp3_1
    
    do
        if (data_1440155c0 != 2 && sub_142a85f00(&data_1440155c0) != 0)
            sub_142a51a30()
            sub_142a85e80(&data_1440155c0)
        
        char* rdx_1
        
        if (rbx_1 s<= data_1440155b4)
            rdx_1 = *(rdi_1 + data_1440155b8)
        else
            rdx_1 = nullptr
        
        sub_142a46d50(data_1440155a0 + rsi_1, rdx_1)
        rsi_1 -= 0xe0
        rdi_1 -= 8
        temp3_1 = rbx_1
        rbx_1 -= 1
    while (temp3_1 - 1 s>= 0)

return sub_142a7db20(7, sub_142a51d70) __tailcall
