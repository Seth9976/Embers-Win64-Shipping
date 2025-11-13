// 函数: sub_1428b53f0
// 地址: 0x1428b53f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t* rsi = *(arg1 + 0x70)
void* r12 = arg3
void* r14 = arg2
uint64_t count = *(rsi + 0xc8)
uint64_t result

if (rsi[0x2f] != 0)
label_1428b54dc:
    
    if (r12 == 0)
    label_1428b55e4:
        
        if (rsi[0x2e] != 0)
            uint64_t rax_6 = zx.q(rsi[0x2a]) & 0xf
            
            if (rax_6.d != 0)
                sub_142903010(&rsi[0x34], &data_143507960, 0x10 - rax_6)
            
            rsi[0x2e] = 0
        
        uint64_t rax_8 = zx.q(rsi[0x2c]) & 0xf
        
        if (rax_8.d != 0)
            sub_142903010(&rsi[0x34], &data_143507960, 0x10 - rax_8)
        
        sub_142903010(&rsi[0x34], &rsi[0x2a], 0x10)
        char* rdx_8 = &rsi[0x21]
        void var_68
        
        if (*(arg1 + 0x10) == 0)
            rdx_8 = &var_68
        
        sub_142902e10(&rsi[0x34], rdx_8)
        rsi[0x2f] = 0
        
        if (r12 == 0 || arg4 == count)
            if (*(arg1 + 0x10) != 0)
                result = zx.q(arg4.d)
            else if (sub_1428bc500(&var_68, &rsi[0x21], sx.q(rsi[0x30])) != 0)
                result = 0xffffffff
            else
                result = zx.q(arg4.d)
        else if (*(arg1 + 0x10) == 0)
            if (sub_1428bc500(&var_68, r12, 0x10) == 0)
                result = zx.q(arg4.d)
            else
                memset(r14 - count, 0, count)
                result = 0xffffffff
        else
            *r14 = *(rsi + 0x84)
            result = zx.q(arg4.d)
    else if (r14 != 0)
        if (rsi[0x2e] != 0)
            uint64_t rax_3 = zx.q(rsi[0x2a]) & 0xf
            
            if (rax_3.d != 0)
                sub_142903010(&rsi[0x34], &data_143507960, 0x10 - rax_3)
            
            rsi[0x2e] = 0
        
        *(rsi + 0xc8) = -1
        
        if (count != -1)
            if (arg4 == count + 0x10)
                goto label_1428b5570
            
            result = 0xffffffff
        else
            count = arg4
        label_1428b5570:
            void* rbx_1 = r12 + count
            
            if (*(arg1 + 0x10) == 0)
                sub_142903010(&rsi[0x34], r12, count)
                sub_1428b50e0(arg1, r14, r12, count)
            else
                sub_1428b50e0(arg1, r14, r12, count)
                sub_142903010(&rsi[0x34], r14, count)
            
            *(rsi + 0xb0) += count
            r14 += count
            r12 = rbx_1
            
            if (rbx_1 == 0 || count != arg4)
                goto label_1428b55e4
            
            result = zx.q(arg4.d)
    else
        sub_142903010(&rsi[0x34], r12, arg4)
        *(rsi + 0xa8) += arg4
        rsi[0x2e] = 1
        result = zx.q(arg4.d)
else
    if (count == -1 || arg2 == 0)
        rsi[8] = 0
        sub_142902860(&rsi[0xc], &data_143507960, 0x40, rsi, &rsi[8])
        sub_142902eb0(&rsi[0x34], &rsi[0xc])
        rsi[8] = 1
        rsi[0x1c] = 0
        *(rsi + 0xb0) = 0
        *(rsi + 0xa8) = 0
        rsi[0x2f] = 1
        
        if (count != -1)
            sub_142903010(&rsi[0x34], &rsi[0x25], 0xd)
            *(rsi + 0xa8) = 0xd
            rsi[0x2e] = 1
        
        goto label_1428b54dc
    
    result = sub_1428b5b20(arg1, arg2, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_98)
return result
