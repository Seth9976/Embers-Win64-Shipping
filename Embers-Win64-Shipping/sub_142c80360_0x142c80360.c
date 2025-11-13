// 函数: sub_142c80360
// 地址: 0x142c80360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rax = *(rbx + 0x5b8)
void* rsi = *(rbx + 0x250)

if (rax != 0 && arg2 s> rax)
    sub_142c64760(rbx, "Maximum file size exceeded", arg3, arg4)
    return 0x3f

*(rsi + 0x20) = arg2
int64_t rax_1 = *(rbx + 0x4e50)
int32_t result

if (rax_1 == 0)
    result = gzprintf(&arg1[0xd3], "RETR %s", arg1[0xe4], arg4)
    
    if (result != 0)
        return result
    
    arg1[0xea].d = 0x20
else
    if (arg2 == -1)
        arg4 = sub_142c64850(rbx, "ftp server doesn't support SIZE\n", arg3, arg4)
    else if (rax_1 s>= 0)
        if (arg2 s< rax_1)
            sub_142c64760(rbx, "Offset (%I64d) was beyond file size (%I64d)", rax_1, arg4)
            return 0x24
        
        *(rsi + 0x20) = arg2 - rax_1
    else
        int64_t rcx_3 = neg.q(rax_1)
        
        if (arg2 s< rcx_3)
            sub_142c64760(rbx, "Offset (%I64d) was beyond file size (%I64d)", rax_1, arg4)
            return 0x24
        
        *(rsi + 0x20) = rcx_3
        *(rbx + 0x4e50) = arg2 - rcx_3
    
    if (*(rsi + 0x20) != 0)
        int512_t zmm2_1 = sub_142c64850(rbx, "Instructs server to resume from offset %I64d\n", 
            *(rbx + 0x4e50), arg4)
        result = gzprintf(&arg1[0xd3], "REST %I64d", *(rbx + 0x4e50), zmm2_1)
        
        if (result != 0)
            return result
        
        arg1[0xea].d = 0x1b
    else
        int64_t r8_1
        int512_t zmm2
        r8_1, zmm2 = sub_142c68d40(arg1, 0xffffffff, -1, 0, arg4, 0, 0xffffffff, nullptr)
        sub_142c64850(rbx, "File already completely downloaded\n", r8_1, zmm2)
        *(rsi + 0x18) = 2
        arg1[0xea].d = 0
return 0
