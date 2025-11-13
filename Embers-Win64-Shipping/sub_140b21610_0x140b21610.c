// 函数: sub_140b21610
// 地址: 0x140b21610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1)
void* rdi = arg3
int32_t rbx

if (rsi.d u> 5)
    rbx = 1
else
    switch (rsi)
        case 0
            rbx = 5
        case 1, 5
            rbx = 0
        case 2, 3, 4
            rbx = 4

if (data_143de5425 != 0 && rsi.d != 0)
    int64_t* rcx = data_143ddb418
    
    if (rcx != 0)
        sub_140b1f700(rcx, 
            Message Dialog was triggered in unattended script mode without a default value. %d will be "
        "used.", zx.q(rbx))

if (rdi == 0)
    sub_140b19540()
    rdi = &data_143de6cb0

int64_t var_28 = *rdi
int64_t* rax_1 = *(rdi + 8)

if (rax_1 != 0)
    rax_1[1].d += 1

int32_t var_18 = *(rdi + 0x10)
char rax_3 = sub_140a4aa30()

if (rax_3 == 0 && data_143de5425 == rax_3)
    int64_t* rax_4 = sub_140ac6680(&var_28)
    PWSTR rbx_1
    
    if (rax_4[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_4
    
    int64_t* rax_5 = sub_140ac6680(arg2)
    PWSTR rdx
    
    if (rax_5[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *rax_5
    
    rbx = sub_140b709d0(rsi.d, rdx, rbx_1)

if (data_143ddb418 != 0)
    int64_t* rax_7 = sub_140ac6680(arg2)
    int16_t* const rsi_1
    
    if (rax_7[1].d == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *rax_7
    
    int16_t** rax_8 = sub_140ac6680(&var_28)
    
    if (rax_8[1].d != 0)
        *rax_8
    
    int64_t rax_9 = sub_140a4afb0(rbx)
    int16_t* const var_38_1 = rsi_1
    sub_140b1f700(data_143ddb418, u"Message dialog closed, result: %s, title: %s, text: %s", rax_9)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t rsi_2 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*rax_1 + 8))(rax_1, zx.q(rsi_2))

return zx.q(rbx)
