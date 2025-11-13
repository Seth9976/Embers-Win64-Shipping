// 函数: ??$common_mktime@J@@YAJQEAUtm@@_N@Z
// 地址: 0x142251780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
void* result = __security_cookie ^ &var_88
void* result_1 = result
int64_t* rbx = arg1
int64_t rcx = arg1[8]

if (rcx != 0)
    result = sub_140a84c80(rcx, 0, 0)
    rbx[8] = result

int32_t i_2 = rbx[9].d
void* rsi = &rbx[9]

if (i_2 != 0)
    sub_1405a4aa0(&arg1[7], 0, i_2, 4)
    int32_t rcx_2 = 0
    
    if (i_2 s> 0)
        int64_t r9_1 = 0
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            void* rdx_1 = arg1[8]
            void* rax_1 = &arg1[7]
            int64_t r8_4 = (sx.q(*rsi) - 1) & r9_1
            
            if (rdx_1 != 0)
                rax_1 = rdx_1
            
            r9_1 += 1
            *(rax_1 + (r8_4 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t r10_1 = rbx[5].d
    void* r9_2 = &rbx[2]
    int32_t var_68_1 = 0
    int32_t r8_5 = 0
    int32_t var_64_1 = 1
    void* var_60_1 = r9_2
    int32_t var_58_1 = 0xffffffff
    int64_t var_54_1 = 0
    
    if (r10_1 != 0)
        void* rax_2 = *(r9_2 + 0x10)
        
        if (rax_2 != 0)
            r9_2 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r9_2
        
        if (rdx_4 != 0)
        label_142251898:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_64_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_54_1.d = r8_5 - rax_10 + 0x1f
            
            if (r8_5 - rax_10 + 0x1f s> r10_1)
                var_54_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_2)
                r8_5 += 0x20
                rcx_2 += 1
                var_54_1:4.d = r8_5
                var_68_1 = rcx_2
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
                int32_t var_58_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_142251898
            
            var_54_1.d = r10_1
    
    int64_t* var_48_1 = rbx
    result = nullptr
    int128_t var_40 = var_68_1.o
    int64_t var_30_1 = 0xffffffff
    
    if (0 s< r10_1)
        int32_t r11_1 = 0
        
        while (true)
            int64_t rcx_4 = sx.q(r11_1) * 5
            int64_t rax_13 = *rbx
            void* r10_2 = rax_13 + (rcx_4 << 2)
            int64_t rcx_5 = *(rax_13 + (rcx_4 << 2))
            int32_t r8_9 = ((rcx_5 u>> 0x20).d * 0x17 + rcx_5.d) & (*rsi - 1)
            void* rax_18 = &arg1[7]
            *(r10_2 + 0x10) = r8_9
            void* rdx_6 = arg1[8]
            int64_t r9_3 = sx.q(r8_9)
            
            if (rdx_6 != 0)
                rax_18 = rdx_6
            
            *(r10_2 + 0xc) = *(rax_18 + (((sx.q(*rsi) - 1) & r9_3) << 2))
            void* rax_20 = &arg1[7]
            void* rcx_9 = arg1[8]
            
            if (rcx_9 != 0)
                rax_20 = rcx_9
            
            *(rax_20 + (((sx.q(*rsi) - 1) & r9_3) << 2)) = r11_1
            var_30_1.d &= not.d(var_40:4.d)
            sub_14059bdd0(&var_40)
            result = var_40:8.q
            r11_1 = var_30_1:4.d
            
            if (r11_1 s>= *(result + 0x18))
                break
            
            rbx = var_48_1

__security_check_cookie(result_1 ^ &var_88)
return result
