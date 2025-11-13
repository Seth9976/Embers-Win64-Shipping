// 函数: sub_1419cec70
// 地址: 0x1419cec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int64_t r11 = sx.q(arg3)
int64_t rdx_2 = (r11 ^ rbx) * -0x622015f714c7d297
int64_t r9_4 = (rdx_2 u>> 0x2f ^ r11 ^ rdx_2) * -0x622015f714c7d297
void* r9_5 = arg1[3]

if ((r9_5.b & 1) != 0)
    r9_5 = (r9_5 s>> 1) + &arg1[3]

void* rdx_3 = arg1[5]

if ((rdx_3.b & 1) != 0)
    rdx_3 = (rdx_3 s>> 1) + &arg1[5]

void* r8 = arg1[1]

if ((r8.b & 1) != 0)
    r8 = (r8 s>> 1) + &arg1[1]

void* rcx_4 = *arg1

if ((rcx_4.b & 1) != 0)
    rcx_4 = (rcx_4 s>> 1) + arg1

uint64_t i_1

for (int32_t i = *(rcx_4 + ((zx.q(arg1[2].w) & zx.q(((r9_4 u>> 0x2f).w ^ r9_4.w) * 0x2d69)) << 2)); 
        i != 0xffffffff; i = *(r8 + (i_1 << 2)))
    i_1 = zx.q(i)
    
    if (*(r9_5 + (i_1 << 3)) == rbx && *(rdx_3 + (i_1 << 2)) == r11.d)
        void* rdx_5 = arg1[7]
        
        if ((rdx_5.b & 1) != 0)
            rdx_5 = (rdx_5 s>> 1) + &arg1[7]
        
        int64_t i_2 = sx.q(i)
        int64_t result = *(rdx_5 + (i_2 << 3))
        
        if ((result.b & 1) == 0)
            return result
        
        return (result s>> 1) + rdx_5 + (i_2 << 3)

return 0
