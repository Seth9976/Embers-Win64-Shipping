// 函数: sub_140ab9200
// 地址: 0x140ab9200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_f8 = nullptr
int32_t i_2 = 0
sub_140a2cee0(arg2, &var_f8, nullptr, 1)
uint64_t rsi

if (i_2 s<= 1)
    rsi.b = 0
else
    TEB* gsbase
    int32_t* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143dba258 s> *rbx_2)
        _Init_thread_header(&data_143dba258)
        
        if (data_143dba258 == 0xffffffff)
            sub_140b58260(&data_143dba250, u"only", 1)
            _Init_thread_footer(&data_143dba258)
    
    int64_t* rax_3 = var_f8
    int16_t* rdx_1
    
    if (rax_3[3].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = rax_3[2]
    
    int64_t arg_20
    int64_t rax_5 = *sub_140b58260(&arg_20, rdx_1, 1)
    
    if (data_143dba250 != rax_5)
        rsi.b = 0
    else
        int64_t* rax_6 = var_f8
        int16_t* rdx_2
        
        if (rax_6[1].d == 0)
            rdx_2 = &data_142d40450
        else
            rdx_2 = *rax_6
        
        int64_t var_a8
        sub_140b58260(&var_a8, rdx_2, 1)
        
        if (data_143dba270 s> *rbx_2)
            _Init_thread_header(&data_143dba270)
            
            if (data_143dba270 == 0xffffffff)
                data_143dba260 = 0
                data_143dba268 = 0
                sub_1405947f0(&data_143dba260, 5)
                int32_t rax_51 = data_143dba268.d + 5
                bool cond:0_1 = rax_51 s<= data_143dba268:4.d
                data_143dba268.d = rax_51
                
                if (not(cond:0_1))
                    sub_140594770(&data_143dba260)
                
                sub_1405a7220(data_143dba260, 5, " off", 5, 0x3f)
                atexit(sub_142cbdc10)
                _Init_thread_footer(&data_143dba270)
        
        if (data_143dba288 s> *rbx_2)
            _Init_thread_header(&data_143dba288)
            
            if (data_143dba288 == 0xffffffff)
                data_143dba278 = 0
                data_143dba280 = 0
                sub_1405947f0(&data_143dba278, 9)
                int32_t rax_52 = data_143dba280.d + 9
                bool cond:1_1 = rax_52 s<= data_143dba280:4.d
                data_143dba280.d = rax_52
                
                if (not(cond:1_1))
                    sub_140594770(&data_143dba278)
                
                sub_1405a7220(data_143dba278, 9, " Verbose", 9, 0x3f)
                atexit(sub_142cbdc30)
                _Init_thread_footer(&data_143dba288)
        
        int32_t var_e4_1 = 1
        int32_t r11_1 = *(arg1 + 0x848)
        void* var_e0_1 = arg1 + 0x830
        int32_t rcx_4 = 0
        int32_t var_e8 = 0
        int32_t r8 = 0
        int32_t var_d8_1 = 0xffffffff
        int64_t var_d4_1 = 0
        
        if (r11_1 != 0)
            void* rax_9 = *(arg1 + 0x840)
            void* r9_1 = arg1 + 0x830
            
            if (rax_9 != 0)
                r9_1 = rax_9
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r11_1 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_140ab938d:
                int32_t rax_16 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
                int32_t var_e4_2 = rax_16
                int32_t rax_17
                
                if (rax_16 == 0)
                    rax_17 = 0x20
                else
                    rax_17 = 0x1f - temp0_1
                
                var_d4_1.d = r8 - rax_17 + 0x1f
                
                if (r8 - rax_17 + 0x1f s> r11_1)
                    var_d4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_4)
                    r8 += 0x20
                    rcx_4 += 1
                    var_d4_1:4.d = r8
                    var_e8 = rcx_4
                    
                    if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    var_d8_1 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_140ab938d
                
                var_d4_1.d = r11_1
        
        int32_t rdx_7 = *(arg1 + 0x848)
        double zmm2_1[0x2] = var_d8_1.o
        double var_40_1[0x2] = zmm2_1
        int32_t rsi_1 = 0xffffffff << (rdx_7.b & 0x1f)
        int128_t var_50_1 = var_e8.o
        int32_t r8_3 = rdx_7 s>> 5
        int32_t r9_3 = rdx_7 & 0xffffffe0
        int64_t var_80_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
        int32_t var_d8_2 = rsi_1
        var_d4_1.d = rdx_7
        int128_t var_a0 = (arg1 + 0x820).o
        int128_t var_48
        int128_t var_90_1 = var_48
        
        if (rdx_7 != r11_1)
            void* rax_19 = *(arg1 + 0x840)
            void* r10_1 = arg1 + 0x830
            
            if (rax_19 != 0)
                r10_1 = rax_19
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(r11_1 - 1)
            int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_1
            
            if (rdx_11 != 0)
            label_140ab9463:
                int32_t rax_26 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_26)
                int32_t rbx_3
                
                if (rax_26 == 0)
                    rbx_3 = 0x20
                else
                    rbx_3 = 0x1f - temp0_3
                
                var_d4_1.d = r9_3 - rbx_3 + 0x1f
                
                if (r9_3 - rbx_3 + 0x1f s> r11_1)
                    var_d4_1.d = r11_1
            else
                while (true)
                    int64_t rcx_9 = sx.q(r8_3)
                    r9_3 += 0x20
                    r8_3 += 1
                    
                    if (rcx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r10_1 + (rcx_9 << 2) + 4)
                    var_d8_2 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_140ab9463
                
                var_d4_1.d = r11_1
        
        while (true)
            int64_t rax_28 = sx.q(var_90_1:0xc.d)
            int64_t* rdx_12 = var_a0.q
            
            if (rax_28.d == (var_d8_2.q u>> 0x20).d && var_90_1.q == arg1 + 0x830
                    && rdx_12 == arg1 + 0x820)
                break
            
            int128_t zmm0_1 = *(*rdx_12 + rax_28 * 0x18)
            int64_t* rcx_12 = &arg_20
            int64_t rax_30 = zmm0_1.q
            arg_20 = rax_30
            
            if (rax_30 != var_a8)
                int64_t* rax_41
                int32_t r9_7
                rax_41, r9_7 = sub_140b63b70(rcx_12, &var_e8)
                int32_t rax_42 = rax_41[1].d
                int64_t var_b8
                int32_t var_ac_1
                
                if (rax_42 s> 1)
                    int32_t rbx_9 = data_143dba268.d
                    int32_t rbx_10
                    
                    if (rbx_9 == 0)
                        rbx_10 = 0
                    else
                        rbx_10 = rbx_9 - 1
                    
                    int32_t r8_11
                    
                    if (rax_42 == 0)
                        r8_11 = rax_42 + 1
                    
                    if (rax_42 != 0 || rbx_10 == 0)
                        r8_11 = 0
                    
                    int64_t rax_44 = *rax_41
                    *rax_41 = 0
                    int32_t rcx_24 = *(rax_41 + 0xc)
                    int64_t var_108 = rax_44
                    int32_t rax_45 = rax_41[1].d
                    rax_41[1] = 0
                    int32_t rdx_26 = rbx_10 + rax_45 + r8_11
                    
                    if (rdx_26 s> rcx_24)
                        sub_1405947f0(&var_108, rdx_26)
                    
                    r9_7 = sub_140a20ba0(&var_108, data_143dba260, rbx_10)
                    var_b8 = var_108
                    int32_t var_b0_2 = rax_45
                    int32_t var_100_1
                    var_100_1.q = 0
                    var_108 = 0
                    var_ac_1 = rcx_24
                else
                    int32_t rbx_8 = data_143dba268.d
                    int64_t rdi_2 = data_143dba260
                    var_b8 = 0
                    int32_t var_b0_1 = rbx_8
                    
                    if (rbx_8 == 0)
                        var_ac_1 = 0
                    else
                        sub_1405a4c70(&var_b8, rbx_8, 0)
                        r9_7 = memcpy(var_b8, rdi_2, rbx_8 * 2)
                sub_140ab7510(arg1, &var_b8, 0, r9_7)
                int64_t rcx_28 = var_b8
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                int64_t rcx_29 = var_e8.q
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
            else
                uint64_t var_68
                int64_t* rax_31
                int32_t r9_5
                rax_31, r9_5 = sub_140b63b70(rcx_12, &var_68)
                int32_t rax_32 = rax_31[1].d
                int64_t var_c8
                int32_t var_bc_1
                
                if (rax_32 s> 1)
                    int32_t rbx_5 = data_143dba280.d
                    int32_t rbx_6
                    
                    if (rbx_5 == 0)
                        rbx_6 = 0
                    else
                        rbx_6 = rbx_5 - 1
                    
                    int32_t r8_6
                    
                    if (rax_32 == 0)
                        r8_6 = rax_32 + 1
                    
                    if (rax_32 != 0 || rbx_6 == 0)
                        r8_6 = 0
                    
                    int64_t rax_34 = *rax_31
                    *rax_31 = 0
                    int32_t rcx_15 = rax_31[1].d
                    int64_t var_118 = rax_34
                    int32_t rax_35 = *(rax_31 + 0xc)
                    rax_31[1] = 0
                    int32_t rdx_18 = r8_6 + rbx_6 + rcx_15
                    
                    if (rdx_18 s> rax_35)
                        sub_1405947f0(&var_118, rdx_18)
                    
                    r9_5 = sub_140a20ba0(&var_118, data_143dba278, rbx_6)
                    var_c8 = var_118
                    int32_t var_c0_2 = rcx_15
                    int32_t var_110_1
                    var_110_1.q = 0
                    var_118 = 0
                    var_bc_1 = rax_35
                else
                    int32_t rbx_4 = data_143dba280.d
                    int64_t rdi_1 = data_143dba278
                    var_c8 = 0
                    int32_t var_c0_1 = rbx_4
                    
                    if (rbx_4 == 0)
                        var_bc_1 = 0
                    else
                        sub_1405a4c70(&var_c8, rbx_4, 0)
                        r9_5 = memcpy(var_c8, rdi_1, rbx_4 * 2)
                sub_140ab7510(arg1, &var_c8, 0, r9_5)
                int64_t rcx_19 = var_c8
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                uint64_t rcx_20 = var_68
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                char* rax_38 = zmm0_1:8.q
                
                if (rax_38 == 0)
                    rcx_20.b = 6
                else
                    rcx_20 = zx.q(*rax_38)
                
                int64_t* rax_39 = var_f8
                int16_t* const rbx_7
                
                if (rax_39[1].d == 0)
                    rbx_7 = &data_142d40450
                else
                    rbx_7 = *rax_39
                
                sub_140b2b1a0(rcx_20.b)
                sub_140b1f700(arg3, u"%s is now %s", rbx_7)
            
            var_90_1:8.d &= not.d(var_a0:0xc.d)
            sub_14059bdd0(&var_a0:8)
        
        sub_140b1f640(arg3, u"Disabling other logs finished")
        rsi.b = 1

int32_t i_1 = i_2
int64_t* rbx_11 = var_f8

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_32 = *rbx_11
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        rbx_11 = &rbx_11[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_11 = var_f8

if (rbx_11 != 0)
    sub_140a74f90(rbx_11)

return zx.q(rsi.b)
