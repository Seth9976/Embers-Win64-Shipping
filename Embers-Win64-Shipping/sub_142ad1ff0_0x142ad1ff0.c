// 函数: sub_142ad1ff0
// 地址: 0x142ad1ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
rbx.b = 0
char* rax = getenv(data_143ccb0d8)

if (rax != 0)
    rbx = 0
    
    if (sub_142a862b0(rax, "true", rax.d) == 0)
        rbx = 1

int64_t* result = sub_142b53b80("japanese", rbx.b, arg1)
bool cond:0 = *arg1 s> 0
data_144016670 = result

if (not(cond:0))
    result = zx.q(*(result + 0xc))
    data_144016680 = result.d

return result
