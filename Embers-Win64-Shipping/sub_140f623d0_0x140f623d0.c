// 函数: sub_140f623d0
// 地址: 0x140f623d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140db3130(&arg1[0x88])
char rax_1
double zmm0
rax_1, zmm0 = sub_140d9f540(&arg1[0x88], arg2)
int32_t* result = sub_140d9f540(&arg1[0x96], zmm0)
char rsi = result.b

if (rax_1 == 0 && rax != 0)
    result = sub_140f45220(arg1)

if (rsi == 0 && arg1[0xb4].d != 0xffffffff)
    result = sub_140da2c00()
    sub_140db35c0(result, &arg1[0xb4])

return result
