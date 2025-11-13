// 函数: ?GetRangeOfTrysToCheck@__FrameHandler3@@SA?AU?$pair@Viterator@TryBlockMap@__FrameHandler3@@V123@@std@@AEAVTryBlockMap@1@HPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@H@Z
// 地址: 0x142a1a1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg5
int32_t rbp = 0
int256_t* rdi = arg3
*rbx = 0
int64_t i_1 = 2
int256_t* rsi = arg1
int64_t i

do
    int32_t var_38
    sub_142a06330(rsi, arg2, rdi, arg4, &arg5, &var_38)
    rsi += sx.q(arg2 << 4)
    *rbx += arg5.d
    rbp += var_38
    rdi += sx.q(arg4 << 4)
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rcx_1 = sx.q(rbp)
return zx.q(*rbx - ((rcx_1 * rcx_1) s>> 0xa).d)
