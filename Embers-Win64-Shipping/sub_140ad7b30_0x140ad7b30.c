// 函数: sub_140ad7b30
// 地址: 0x140ad7b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_8 = 0
arg_8.b = 0
sub_140af2fd0(data_143ddb400, Internationalization", ShouldUseLocalizedNumericInput", &arg_8, 
    &data_143de5840)
int64_t result
int64_t* rbx

if (arg_8.b == 0)
    result = sub_140a783c0()
    rbx = arg_8.q
else
    char* rax = sub_140a752e0()
    rbx = *(rax + 0x40)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    result = sub_140a797c0(*(rax + 0x38))
    rsi = 1

if ((rsi & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

return result
