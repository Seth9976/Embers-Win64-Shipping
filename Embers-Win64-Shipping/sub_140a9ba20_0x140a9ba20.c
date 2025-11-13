// 函数: sub_140a9ba20
// 地址: 0x140a9ba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** r12 = arg3

if (*(*arg1 + 8) s<= 1)
    int64_t* rax_1 =
        sub_140af5690(data_143ddb400, Internationalization.AssetGroupCultures", 0, 1, arg3)
    
    if (rax_1 != 0)
        int32_t rbx_1 = rax_1[5].d
        int32_t var_a4_1 = 1
        int32_t rcx_1 = 0
        int32_t var_a8_1 = 0
        int32_t r8 = 0
        void* var_a0 = &rax_1[2]
        int32_t var_98_1 = 0xffffffff
        int32_t var_94_1 = 0
        
        if (rbx_1 != 0)
            void* rax_2 = rax_1[4]
            void* r9_1 = &rax_1[2]
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rbx_1 - 1)
            int32_t rdx_2 = *r9_1
            
            if (rdx_2 != 0)
            label_140a9bb18:
                int32_t rax_9 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_a4_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_94_1 = r8 - rax_10 + 0x1f
                
                if (r8 - rax_10 + 0x1f s> rbx_1)
                    var_94_1 = rbx_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_1)
                    r8 += 0x20
                    rcx_1 += 1
                    var_94_1 = r8
                    var_a8_1 = rcx_1
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                    int32_t var_98_2 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_140a9bb18
                
                var_94_1 = rbx_1
        
        int32_t rdx_4 = rax_1[5].d
        int128_t var_38_1 = 0xffffffff
        int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
        int128_t var_48_1 = var_a8_1.o
        int32_t r8_3 = rdx_4 s>> 5
        int32_t r9_3 = rdx_4 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_3 = r14_1
        var_94_1 = rdx_4
        int128_t var_78 = rax_1.o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_4 != rbx_1)
            void* rax_12 = rax_1[4]
            void* r10_1 = &rax_1[2]
            
            if (rax_12 != 0)
                r10_1 = rax_12
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rbx_1 - 1)
            int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14_1
            
            if (rdx_8 != 0)
            label_140a9bbe2:
                int32_t rax_19 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
                int32_t r11_1
                
                if (rax_19 == 0)
                    r11_1 = 0x20
                else
                    r11_1 = 0x1f - temp0_4
                
                var_94_1 = r9_3 - r11_1 + 0x1f
                
                if (r9_3 - r11_1 + 0x1f s> rbx_1)
                    var_94_1 = rbx_1
            else
                while (true)
                    int64_t rcx_6 = sx.q(r8_3)
                    r9_3 += 0x20
                    r8_3 += 1
                    
                    if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r10_1 + (rcx_6 << 2) + 4)
                    var_98_3 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_140a9bbe2
                
                var_94_1 = rbx_1
        
        while (true)
            int32_t var_5c
            int64_t rax_21 = sx.q(var_5c)
            int64_t rcx_8 = var_78.q
            
            if (rax_21.d == (var_98_3.q u>> 0x20).d && var_68_1.q == &rax_1[2] && rcx_8 == rax_1)
                break
            
            int64_t* r8_6 = rax_21 * 0x30 + *rcx_8
            int64_t* rcx_9 = arg1[2]
            int64_t* rax_22 = *rcx_9
            void* rcx_11 = &rax_22[sx.q(rcx_9[1].d) * 3]
            
            if (rax_22 == rcx_11)
            label_140a9bc66:
                rax_22 = nullptr
            else
                while (*rax_22 != *r8_6)
                    rax_22 = &rax_22[3]
                    
                    if (rax_22 == rcx_11)
                        goto label_140a9bc66
            
            if (rax_22 == 0)
                int32_t rcx_12 = r8_6[4].d
                void* const rdx_11 = 0x18
                var_a8_1.q = *r8_6
                int32_t rax_24 = rcx_12 - 1
                
                if (rcx_12 == 0)
                    rax_24 = 0
                
                if (rax_24 s<= 0)
                    rdx_11 = 8
                
                sub_140596d10(&var_a0, rdx_11 + r8_6)
                int64_t* rbx_2 = arg1[2]
                int64_t rdi_1 = sx.q(rbx_2[1].d)
                int32_t rax_25 = (rdi_1 + 1).d
                rbx_2[1].d = rax_25
                
                if (rax_25 s> *(rbx_2 + 0xc))
                    sub_140a88b60(rbx_2)
                
                int64_t* rdx_14 = *rbx_2 + rdi_1 * 0x18
                *rdx_14 = var_a8_1.q
                rdx_14[1] = var_a0
                rdx_14[2].d = var_98_3
                *(rdx_14 + 0x14) = var_94_1
            
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
        
        r12 = arg3

uint64_t* r9_5 = *arg1

if (r9_5[1].d s<= 1)
    sub_140af5b90(data_143ddb400, u"Internationalization", u"Language", r9_5, r12)

uint64_t* r9_6 = arg1[1]

if (r9_6[1].d s<= 1)
    sub_140af5b90(data_143ddb400, u"Internationalization", u"Locale", r9_6, r12)

void* rcx_19 = data_143ddb400
uint64_t var_88 = 0
int32_t var_80 = 0
char result = sub_140af5b90(rcx_19, u"Internationalization", u"Culture", &var_88, r12)

if (result != 0)
    int64_t* rbx_3 = *arg1
    
    if (rbx_3[1].d s<= 1)
        result = &var_88
        
        if (rbx_3 != &var_88)
            uint64_t r14_4 = var_88
            int32_t r8_7 = *(rbx_3 + 0xc)
            rbx_3[1].d = var_80
            
            if (var_80 != 0 || r8_7 != 0)
                sub_1405a4c70(rbx_3, var_80, r8_7)
                result = memcpy(*rbx_3, r14_4, var_80 * 2)
            else
                *(rbx_3 + 0xc) = 0
    
    int64_t* rbx_4 = arg1[1]
    
    if (rbx_4[1].d s<= 1)
        result = &var_88
        
        if (rbx_4 != &var_88)
            uint64_t rsi_1 = var_88
            int32_t r8_10 = *(rbx_4 + 0xc)
            rbx_4[1].d = var_80
            
            if (var_80 != 0 || r8_10 != 0)
                sub_1405a4c70(rbx_4, var_80, r8_10)
                result = memcpy(*rbx_4, rsi_1, var_80 * 2)
            else
                *(rbx_4 + 0xc) = 0

uint64_t rcx_24 = var_88

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
