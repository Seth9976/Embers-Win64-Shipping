// 函数: sub_142b65230
// 地址: 0x142b65230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdi_1 = (arg2 s>> 5).w
int16_t r13_1 = ((arg3 - 1) s>> 5).w
uint32_t rsi = arg2
int32_t* r14 = arg1
void* rax_1 = sub_142b65cf0(arg1, arg2)
int16_t* rbx = rax_1
uint32_t result = zx.d(*rax_1)

if (rdi_1 u>= result.w || arg6 != 2)
    goto label_142b652ce

uint32_t r14_2 = zx.d(result.w) << 5

if (r14_2 s> arg3)
    r14_2 = arg3

if (sub_142b64dc0(rsi, r14_2 - 1, arg4, arg5).b != 0)
    rsi = r14_2
    r14 = arg1
label_142b652ce:
    
    if (rdi_1 == r13_1)
        if (rdi_1 == *rbx)
            return sub_142b64fd0(r14, rbx, rsi, arg3 - 1, arg4, arg5, arg6)
        
        if (arg6 != 2)
            result.b = 1
            return result
        
    label_142b654d0:
        uint32_t rdx_13 = 0x110000
        
        if (arg3 s<= 0x110000)
            rdx_13 = arg3
        
        return sub_142b64dc0(rsi, rdx_13 - 1, arg4, arg5)
    
    void* rdx_3 = zx.q(r14[1]) + r14
    result = zx.d(*rbx)
    void* r14_5 = rdx_3 + ((zx.q(*rdx_3) * 3 + 1) << 1)
    int32_t* rdi_2
    
    if (rdi_1 != result.w)
        if (rdi_1 u<= result.w)
        label_142b653cf:
            rdi_2 = arg1
        label_142b653da:
            
            if (rbx u< r14_5)
                while (true)
                    result = zx.d(*rbx)
                    
                    if (result.w u>= r13_1)
                        if (rbx u< r14_5 && *rbx == r13_1)
                            return sub_142b64fd0(rdi_2, rbx, (arg3 - 1) & 0xffffffe0, arg3 - 1, 
                                arg4, arg5, arg6)
                        
                        break
                    
                    rsi = zx.d(result.w) << 5
                    
                    if (sub_142b64fd0(rdi_2, rbx, rsi, rsi + 0x1f, arg4, arg5, arg6).b == 0)
                        goto label_142b652bf
                    
                    void* rdi_3 = &rbx[3]
                    
                    if (rdi_3 u< r14_5)
                        uint32_t rcx_5 = zx.d(*rbx)
                        uint32_t rdx_9 = zx.d(*rdi_3)
                        
                        if (rdx_9 u> rcx_5 + 1 && arg6 == 2)
                            uint32_t rdx_10 = rdx_9 << 5
                            
                            if (rdx_10 s> arg3)
                                rdx_10 = arg3
                            
                            if (sub_142b64dc0((rcx_5 + 1) << 5, rdx_10 - 1, arg4, arg5).b == 0)
                                goto label_142b652bf
                    
                    rbx = rdi_3
                    
                    if (rdi_3 u>= r14_5)
                        break
                    
                    rdi_2 = arg1
            
            if (arg6 != 2 || rbx != r14_5)
                result.b = 1
                return result
            
            uint32_t rax_5 = (zx.d(rbx[-3]) + 1) << 5
            
            if (rax_5 s> rsi)
                rsi = rax_5
            
            goto label_142b654d0
        
        rbx = &rbx[3]
        
        if (rbx u>= r14_5)
            goto label_142b653cf
        
        result = zx.d(*rbx)
        
        if (result.w u<= rdi_1 || arg6 != 2)
            goto label_142b653cf
        
        uint32_t rdx_6 = zx.d(result.w) << 5
        
        if (rdx_6 s> arg3)
            rdx_6 = arg3
        
        if (sub_142b64dc0(rsi, rdx_6 - 1, arg4, arg5).b != 0)
            goto label_142b653cf
    else
        if ((rsi.b & 0x1f) == 0)
            goto label_142b653cf
        
        rdi_2 = arg1
        
        if (sub_142b64fd0(rdi_2, rbx, rsi, (zx.d(rdi_1) << 5) + 0x1f, arg4, arg5, arg6).b != 0)
            rbx = &rbx[3]
            goto label_142b653da

label_142b652bf:
result.b = 0
return result
