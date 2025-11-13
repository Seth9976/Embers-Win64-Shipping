// 函数: sub_141fbd120
// 地址: 0x141fbd120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3 + 7)
int32_t count = (temp1 + (temp0 & 7)) s>> 3

if (count == 0)
    return count

if (count u> 0x800)
    sub_140af98a0("Unknown", 0x17f6, 
        UDemoNetConnection::LowLevelSend: CountBytes > MAX_DEMO_READ_WRITE_BUFFER.", arg4)
    sub_140afbb40()

int64_t rax_5
int64_t rsi_1

if (*(arg1 + 0x1508) == 0)
    rsi_1 = sx.q(*(arg1 + 0x1a38))
    int32_t rax_4 = (rsi_1 + 1).d
    *(arg1 + 0x1a38) = rax_4
    
    if (rax_4 s> *(arg1 + 0x1a3c))
        sub_1405c4ec0(arg1 + 0x1a30)
    
    rax_5 = *(arg1 + 0x1a30)
else
    rsi_1 = sx.q(*(arg1 + 0x1a48))
    int32_t rax_3 = (rsi_1 + 1).d
    *(arg1 + 0x1a48) = rax_3
    
    if (rax_3 s> *(arg1 + 0x1a4c))
        sub_1405c4ec0(arg1 + 0x1a40)
    
    rax_5 = *(arg1 + 0x1a40)

int64_t* rdi_1 = rax_5 + rsi_1 * 0x28
*rdi_1 = 0
rdi_1[1] = 0
rdi_1[2].d = arg3
*(rdi_1 + 0x14) = *arg4
*(rdi_1 + 0x24) = 0
int32_t rax_6 = rdi_1[1].d + count
rdi_1[1].d = rax_6

if (rax_6 s> *(rdi_1 + 0xc))
    sub_1405daba0(rdi_1)

return memcpy(*rdi_1, arg2, count)
