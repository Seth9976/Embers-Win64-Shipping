// 函数: sub_140b67f70
// 地址: 0x140b67f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b74300(arg1, arg2, arg3, 1)
PWSTR lpFileName

if (arg2[1].d == 0)
    lpFileName = &data_142d40450
else
    lpFileName = *arg2

HANDLE rax = CreateFileW(lpFileName, 0x80, FILE_SHARE_DELETE | FILE_SHARE_READ | FILE_SHARE_WRITE, 
    nullptr, OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)

if (rax != -1)
    uint64_t rbx_1 = zx.q(arg2[1].d)
    int32_t rax_1 = (rbx_1 + 9).d
    
    if (rbx_1.d == 0)
        rax_1 = 0xa
    
    bool cond:1_1 = rax_1 s>= rbx_1.d
    bool cond:2_1 = rax_1 == rbx_1.d
    bool cond:3_1 = rax_1 s<= rbx_1.d
    
    while (true)
        if (not(cond:3_1))
            arg2[1].d = rax_1
            
            if (rax_1 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            memset(*arg2 + (sx.q(rbx_1.d) << 1), 0, sx.q(rax_1 - rbx_1.d) * 2)
        else if (not(cond:1_1) && not(cond:2_1))
            arg2[1].d = rax_1
            sub_1405a50a0(arg2)
        
        rax_1 = GetFinalPathNameByHandleW(rax, *arg2, arg2[1].d, VOLUME_NAME_DOS)
        
        if (rax_1 == 0)
            int64_t var_28
            sub_140b74300(arg1, &var_28, arg3, 1)
            
            if (arg2 == &var_28)
                int64_t rcx_10 = var_28
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
            else
                int64_t rcx_9 = *arg2
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                *arg2 = var_28
                int32_t var_20
                arg2[1].d = var_20
                int32_t var_1c
                *(arg2 + 0xc) = var_1c
            
            break
        
        rbx_1 = sx.q(arg2[1].d)
        cond:1_1 = rax_1 s>= rbx_1.d
        cond:2_1 = rax_1 == rbx_1.d
        cond:3_1 = rax_1 s<= rbx_1.d
        
        if (rax_1 u< rbx_1.d)
            if (rax_1 + 1 s> rbx_1.d)
                arg2[1].d = rax_1 + 1
                
                if (rax_1 + 1 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                memset(*arg2 + (rbx_1 << 1), 0, sx.q(rax_1 + 1 - rbx_1.d) * 2)
            else if (rax_1 + 1 s< rbx_1.d && rax_1 + 1 != rbx_1.d)
                arg2[1].d = rax_1 + 1
                sub_1405a50a0(arg2)
            
            break
    
    CloseHandle(rax)

sub_140a2fcd0(arg2, u"\\?\", 0)
sub_140a30380(arg2, 0x5c, 0x2f)
return arg2
