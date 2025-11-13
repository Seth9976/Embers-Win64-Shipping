// 函数: sub_142c612b0
// 地址: 0x142c612b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
char* _EndPtr_1 = nullptr
int32_t r14 = -1
bool cond:3 = arg3 == 0
int64_t* rax = arg3
void* r12 = arg1

while (not(cond:3))
    if (_EndPtr_1 != 0)
        break
    
    if (r14 != 0xffffffff)
        break
    
    char* r15_1 = *rax
    int32_t r13_1 = 0
    char* _EndPtr_2 = _EndPtr_1
    int32_t arg_20 = r14
    void* rcx
    
    if (*r15_1 != 0x3a)
        void* const rdx = &data_1434cce10
        
        if (*(arg2 + 0x3fa) != 0)
            rdx = &data_1436b32c0
        
        *(arg2 + 0xd0)
        char* rax_2
        rax_2, arg4 = sub_142c563e0("%s%s%s", rdx, arg4)
        
        if (rax_2 == 0)
            return 0x1b
        
        void* rbx_1 = -ffffffffffffffff
        
        do
            rbx_1 += 1
        while (*(rax_2 + rbx_1) != _EndPtr_1.b)
        
        int32_t rax_3 = sub_142c704d0(r15_1, rax_2, rbx_1)
        data_143ccb8a0(rax_2)
        
        if (rax_3 == 0 || *(r15_1 + rbx_1) != 0x3a)
            goto label_142c61462
        
        r12 = arg1
        rcx = rbx_1 + 1 + r15_1
    else
        rcx = &r15_1[1]
    
    void* rdx_2
    
    if (*rcx != 0x3a)
        char* rax_4 = strchr(rcx, 0x3a)
        
        if (rax_4 != 0)
            char* _EndPtr = _EndPtr_1
            int32_t rax_5 = strtol(rcx, &_EndPtr, 0xa)
            
            if (_EndPtr == rax_4 && rax_5 == *(arg2 + 0x17c))
                rdx_2 = &rax_4[1]
                goto label_142c6140e
    else
        rdx_2 = rcx + 1
    label_142c6140e:
        int32_t rax_6
        rax_6, arg4 = sub_142c610b0(r12, rdx_2, &_EndPtr_2, &arg_20, arg4)
        _EndPtr_1 = _EndPtr_2
        r13_1 = rax_6
        r14 = arg_20
    
    if (r13_1 != 0)
        return zx.q(r13_1)
    
    if (_EndPtr_1 == 0 || *_EndPtr_1 == r13_1.b)
    label_142c61462:
        *(arg2 + 0x3f3) = 0
        data_143ccb8a0(_EndPtr_1)
        r12 = arg1
        _EndPtr_1 = nullptr
    else
        *(arg2 + 0xe8) = _EndPtr_1
        *(arg2 + 0xf8) = _EndPtr_1
        *(arg2 + 0x3f3) = 1
        arg4 = sub_142c64850(r12, "Connecting to hostname: %s\n", _EndPtr_1, arg4)
    
    if (r14 s< 0)
        r14 = -1
        *(arg2 + 0x3f4) = 0
        rax = arg_18[1]
        arg_18 = rax
        cond:3 = rax == 0
    else
        *(arg2 + 0x180) = r14
        *(arg2 + 0x3f4) = 1
        arg4 = sub_142c64850(r12, "Connecting to port: %d\n", zx.q(r14), arg4)
        rax = arg_18[1]
        arg_18 = rax
        cond:3 = rax == 0

return 0
