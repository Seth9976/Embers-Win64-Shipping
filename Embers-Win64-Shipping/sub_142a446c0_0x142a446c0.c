// 函数: sub_142a446c0
// 地址: 0x142a446c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r10 = &data_142d8d918
char* rbx = arg4

if (arg2 s<= 0)
    r10 = &(*U""\tv 0")[3]

double zmm0

if (arg2 != 0)
    zmm0 = 1024.0
    
    if (arg2 s> 0)
        arg1 *= arg2
else
    zmm0 = 1000.0

int64_t rax_1
int64_t rdx
rdx:rax_1 = sx.o(arg1)
int64_t zmm4 = float.d((rax_1 ^ rdx) - rdx)
char var_28[0x20]

if (zmm0 f<= zmm4)
    double zmm1 = zmm0 * zmm0
    int64_t zmm3 = float.d(arg1)
    char const* const r8
    
    if (zmm1 f<= zmm4)
        double zmm2 = zmm1 * zmm0
        
        if (zmm2 f<= zmm4)
            zmm3 = zmm3 f/ zmm2
            r8 = "%.1f g%s"
        else
            zmm3 = zmm3 f/ zmm1
            r8 = "%.1f m%s"
    else
        zmm3 = zmm3 f/ zmm0
        r8 = "%.1f k%s"
    
    void* const var_38_1 = r10
    _fwprintf_l(&var_28, 0x20, r8, zmm3)
else
    void* const var_38 = r10
    _fwprintf_l(&var_28, 0x20, "%d %s ", zx.q(arg1.d))

if (rbx == 0)
    rbx = "%11s"

return sub_142a43410(arg3, rbx, &var_28)
