// 函数: sub_142924bc0
// 地址: 0x142924bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int128_t* r15 = arg4
int64_t rbx = arg3
int64_t rbp = arg2
int64_t var_48
uint64_t r13_1

if (arg4 == 0 || arg5 == 0)
    r13_1 = 0
label_142924c50:
    
    while (true)
        int32_t arg_8 = 0x10
        void* rax_3 = arg1 + 0xef
        
        for (int32_t i = 0; i s< 0x10; )
            char temp0_1 = *rax_3
            *rax_3 += 1
            
            if (temp0_1 != 0xff)
                break
            
            i += 1
            rax_3 -= 1
        
        int64_t* rcx_1 = *(arg1 + 0xa0)
        var_48.d = 0x10
        int32_t* r8_1 = &arg_8
        
        if (rbx u< 0x10)
            if (sub_1428927c0(rcx_1, arg1 + 0xc0, r8_1, arg1 + 0xe0, 0x10) == 0)
                break
            
            if (arg_8 != 0x10)
                break
            
            memcpy(rbp, arg1 + 0xc0, rbx.d)
        else
            if (sub_1428927c0(rcx_1, rbp, r8_1, arg1 + 0xe0, 0x10) == 0)
                break
            
            if (arg_8 != 0x10)
                break
            
            rbp += 0x10
            int64_t temp1_1 = rbx
            rbx -= 0x10
            
            if (temp1_1 != 0x10)
                continue
        
        if (sub_142925300(arg1, r15, r13_1, nullptr, 0, nullptr, 0) != 0)
            return 1
        
        break
else
    var_48 = 0
    
    if (sub_142925300(arg1, r15, arg5, nullptr, 0, nullptr, 0) != 0)
        r13_1 = 1
        int16_t rcx = *(arg1 + 0x1c) & 1
        int128_t* rax_2 = nullptr
        
        if (rcx != 0)
            r13_1 = arg5
        
        if (rcx != 0)
            rax_2 = r15
        
        r15 = rax_2
        goto label_142924c50
return 0
