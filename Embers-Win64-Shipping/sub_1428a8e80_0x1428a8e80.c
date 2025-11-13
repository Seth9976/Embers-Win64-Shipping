// 函数: sub_1428a8e80
// 地址: 0x1428a8e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 0
char* rdi = arg1

if (arg1 != 0)
    char i = *arg1
    
    if (i != 0)
        int32_t rsi = 0x100
        
        do
            int32_t rax_2 = sub_1428e4730(sx.d(i)) | rsi
            rdi = &rdi[1]
            rsi += 0x100
            rbx = rol.d(rbx, ((rax_2 u>> 2).b ^ rax_2.b) & 0xf) ^ (rax_2 * rax_2)
            i = *rdi
        while (i != 0)
        
        return zx.q(rbx u>> 0x10) ^ zx.q(rbx)

return 0
