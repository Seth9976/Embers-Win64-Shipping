// 函数: sub_140616600
// 地址: 0x140616600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)
std::ostream::write(arg2, *(rdx + 8), sx.q(*(rdx + 0x10)))
std::ostream::put(arg2, 0xff)
std::ostream::put(arg2, *(arg1 + 8))
std::ostream::put(arg2, 3)
int32_t r8_1 = *(arg1 + 0x20)
int64_t i_1 = 0
int64_t i = 0
bool cond:0 = false

do
    if (cond:0)
        __report_rangecheckfailure()
        noreturn
    
    *(i + &data_143cda928) = 0
    i += 1
    cond:0 = i u>= 4
while (i s< 4)

do
    *(i_1 + 0x143cda92a) = r8_1.b
    r8_1 s>>= 8
    
    if (r8_1 == 0)
        break
    
    i_1 -= 1
while (i_1 s> -3)

return std::ostream::write(arg2, &data_143cda928, 3) __tailcall
