// 函数: sub_1428ecc80
// 地址: 0x1428ecc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t r14 = 0
int32_t count_1

if (arg2 == 1)
    count_1 = 4
else if (arg2 == 2)
    count_1 = 0x10
else
    count_1 = 0

sub_142898e50(arg1)
int64_t result
void var_60
void var_50

if (sub_142898c70(arg1) - 1 s<= 0)
label_1428ecf0b:
    int32_t* rax_21 = sub_142898ea0(arg1, sub_142898c70(arg1) - 1)
    
    if (rax_21 == 0 || *rax_21 != 1)
        result = 1
    else if (sub_1428ed6c0(&var_60, **(rax_21 + 8), count_1, 0) == 0)
        result = 0
    else if (sub_1428ed6c0(&var_50, *(*(rax_21 + 8) + 8), count_1, 0xff) == 0)
        result = 0
    else if (memcmp(&var_60, &var_50, zx.q(count_1)) s<= 0)
        result = 1
    else
        result = 0
else
    uint64_t count = zx.q(count_1)
    int32_t r13_1 = 1
    
    while (true)
        int32_t* rax_4 = sub_142898ea0(arg1, r14)
        int32_t* rax_5 = sub_142898ea0(arg1, r13_1)
        
        if (rax_4 == 0)
            break
        
        int32_t rdx_3 = *rax_4
        int32_t* rdx_7
        
        if (rdx_3 == 0)
            if (sub_1428ed6c0(&var_50, *(rax_4 + 8), count_1, 0) == 0)
                break
            
            rdx_7 = *(rax_4 + 8)
        else
            if (rdx_3 != 1)
                break
            
            if (sub_1428ed6c0(&var_50, **(rax_4 + 8), count_1, 0) == 0)
                break
            
            rdx_7 = *(*(rax_4 + 8) + 8)
        
        void var_40
        
        if (sub_1428ed6c0(&var_40, rdx_7, count_1, 0xff) == 0)
            break
        
        if (rax_5 == 0)
            break
        
        int32_t rcx_6 = *rax_5
        char var_70[0x10]
        int32_t* rdx_12
        
        if (rcx_6 == 0)
            if (sub_1428ed6c0(&var_70, *(rax_5 + 8), count_1, 0) == 0)
                break
            
            rdx_12 = *(rax_5 + 8)
        else
            if (rcx_6 != 1)
                break
            
            if (sub_1428ed6c0(&var_70, **(rax_5 + 8), count_1, 0) == 0)
                break
            
            rdx_12 = *(*(rax_5 + 8) + 8)
        
        if (sub_1428ed6c0(&var_60, rdx_12, count_1, 0xff) == 0)
            break
        
        if (memcmp(&var_50, &var_40, count) s> 0)
            break
        
        if (memcmp(&var_70, &var_60, count) s> 0)
            break
        
        if (memcmp(&var_40, &var_70, count) s>= 0)
            break
        
        int64_t rdx_17 = count - 1
        
        if (rdx_17 s>= 0)
            int64_t temp1_1
            
            do
                char rcx_13 = var_70[rdx_17]
                var_70[rdx_17] = rcx_13 - 1
                
                if (rcx_13 != 0)
                    break
                
                temp1_1 = rdx_17
                rdx_17 -= 1
            while (temp1_1 - 1 s>= 0)
        
        if (memcmp(&var_40, &var_70, count) == 0)
            void* var_78
            
            if (sub_1428edfd0(&var_78, &var_50, &var_60, count_1) == 0)
                break
            
            sub_142898dc0(arg1, r14, var_78)
            sub_142898840(arg1, r13_1)
            sub_1428c3d60(rax_4, &data_143514eb0)
            sub_1428c3d60(rax_5, &data_143514eb0)
            r14 -= 1
            r13_1 -= 1
        
        r14 += 1
        r13_1 += 1
        
        if (r14 s>= sub_142898c70(arg1) - 1)
            goto label_1428ecf0b
    
    result = 0
__security_check_cookie(rax_1 ^ &var_98)
return result
