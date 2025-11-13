// 函数: sub_142c7c5b0
// 地址: 0x142c7c5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int64_t rdi = 0
int64_t rbp = 0
int64_t rdx = *(r14 + 0x7b8)
int64_t rax
int512_t entry_zmm2

if (rdx != 0)
    void* const rcx = &data_1434ccff0
    
    if (*rdx != 0x3c)
        rcx = "<%s>"
    
    rax, entry_zmm2 = sub_142c563e0(rcx, rdx, entry_zmm2)
else
    rax = data_143ccb8b0(&data_1436b7b18, rdx)

if (rax != 0)
    char* rdx_1 = *(r14 + 0x7c0)
    int64_t rax_1
    
    if (rdx_1 != 0 && *(arg1 + 0x72c) != 0)
        if (*rdx_1 == 0)
            rax_1 = data_143ccb8b0(&data_1436b7b18)
        else
            rax_1, entry_zmm2 = sub_142c563e0("%s", rdx_1, entry_zmm2)
        
        rdi = rax_1
    
    if (rdx_1 == 0 || *(arg1 + 0x72c) == 0 || rax_1 != 0)
        if (*(arg1 + 0x739) != 0 && *(*arg1 + 0x4e68) s> 0)
            int64_t rax_3
            rax_3, entry_zmm2 = sub_142c563e0("%I64d", *(r14 + 0x4e68), entry_zmm2)
            rbp = rax_3
            
            if (rax_3 == 0)
                data_143ccb8a0(rax)
                data_143ccb8a0(rdi)
                return zx.q((rbp + 0x1b).d)
        
        int32_t rax_5
        
        if (rdi != 0)
            if (rbp != 0)
                int64_t var_18_1 = rbp
                rax_5 = gzprintf(&arg1[0xd3], "MAIL FROM:%s AUTH=%s SIZE=%s", rax, entry_zmm2)
            else
                rax_5 = gzprintf(&arg1[0xd3], "MAIL FROM:%s AUTH=%s", rax, entry_zmm2)
        else if (rbp != 0)
            rax_5 = gzprintf(&arg1[0xd3], "MAIL FROM:%s SIZE=%s", rax, entry_zmm2)
        else
            rax_5 = gzprintf(&arg1[0xd3], "MAIL FROM:%s", rax, entry_zmm2)
        
        data_143ccb8a0(rax)
        data_143ccb8a0(rdi)
        data_143ccb8a0(rbp)
        
        if (rax_5 == 0)
            arg1[0xe1].d = 8
        
        return zx.q(rax_5)
    
    data_143ccb8a0(rax)

return 0x1b
