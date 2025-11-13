// 函数: sub_140d26170
// 地址: 0x140d26170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t* result = __security_cookie ^ &var_148
int64_t* result_1 = result
void* rdx = *arg1

if (rdx != 0)
    int32_t r9_1 = *(rdx + 8)
    uint64_t rsi
    uint64_t arg_20 = rsi
    int64_t r12
    int64_t var_10_1 = r12
    int64_t* r13_1 = *(rdx + 0x10)
    uint32_t rax_2
    rax_2.b = (r9_1 u>> 4).b & 1
    int64_t* rcx = r13_1[8]
    uint32_t var_118_1 = rax_2
    int64_t* var_108_1 = r13_1
    
    if ((arg1[0x29].b & 1) != 0)
        if (((r9_1 u>> 0x16).b & 1) != 0 && ((*(arg1[1] + 8) u>> 4).b & 1) != 0)
            arg1[1] = Concurrency::details::SchedulerBase::FoundAvailableVirtualProcessor(r13_1, 
                *(rdx + 0x20), *(rdx + 0x18), r9_1, 0)
        
        if (*(*(arg1[1] + 0x10) + 0xcc) s< 0)
            int32_t rsi_1 = arg1[0x27].d
            rsi = zx.q(rsi_1 - 1)
            
            if (rsi_1 - 1 s>= 0)
                int64_t r14_2 = sx.q(rsi.d) << 4
                r12 = r14_2
                int32_t temp1_1
                
                do
                    void* rax_8 = arg1[0x26]
                    void* r15_1 = &arg1[0x16]
                    
                    if (rax_8 != 0)
                        r15_1 = rax_8
                    
                    void* rcx_5 = *(r15_1 + r14_2)
                    int64_t rax_10 =
                        sub_140bdd980(*(sub_140d209c0(*(rcx_5 + 0x20)) + 0x10), *(rcx_5 + 0x18))
                    
                    if (rax_10 == 0)
                        int32_t r9_2 = arg1[0x27].d
                        int32_t rdx_5 = r9_2 - rsi.d - 1
                        
                        if (rdx_5 s>= 1)
                            rdx_5 = 1
                        
                        if (rdx_5 != 0)
                            void* rax_11 = arg1[0x26]
                            void* rcx_8 = &arg1[0x16]
                            
                            if (rax_11 != 0)
                                rcx_8 = rax_11
                            
                            memcpy(rcx_8 + r12, (sx.q(r9_2 - rdx_5) << 4) + rcx_8, rdx_5 << 4)
                            r9_2 = arg1[0x27].d
                        
                        arg1[0x27].d = r9_2 - 1
                        sub_140d2b190(&arg1[0x16])
                    else
                        *(r15_1 + r14_2 + 8) = rax_10
                    
                    r12 -= 0x10
                    r14_2 -= 0x10
                    temp1_1 = rsi.d
                    rsi = zx.q(rsi.d - 1)
                while (temp1_1 - 1 s>= 0)
                r13_1 = var_108_1
        
        rax_2 = var_118_1
    
    if (*(arg1 + 0x11) != 0)
        if (rax_2.b == 0 || data_143de542d != 0)
            rcx = r13_1
        
        int64_t r8_4 = arg1[1]
        int64_t* rdx_9 = r13_1
        
        if (rcx != 0)
            rdx_9 = rcx
        
        if (r8_4 == 0)
            r8_4 = rdx_9[0x23]
        
        sub_140d23930(*arg1, rdx_9, r8_4, arg1[2].b)
    
    void* rax_13 = arg1[3]
    
    if (rax_13 == 0 || *(rax_13 + 0x11) != 0)
        r12.b = 1
        
        if ((arg1[0x29].b & 1) == 0)
            rsi.b = 0
        else
            rsi = 1
    else
        r12.b = 0
        rsi.b = 0
    
    int64_t rbp_2 = 0
    int32_t i = 0
    
    if (arg1[0x27].d s> 0)
        do
            void* rax_14 = arg1[0x26]
            void* rdx_10 = &arg1[0x16]
            
            if (rax_14 != 0)
                rdx_10 = rax_14
            
            void* r14_3 = *(rdx_10 + rbp_2)
            void* rdx_11 = *(rdx_10 + rbp_2 + 8)
            sub_140d23930(r14_3, *(rdx_11 + 0x10), rdx_11, 0)
            
            if (r12.b != 0)
                rsi = zx.q(rsi.b)
                
                if ((1 & (*(r14_3 + 8) u>> 0xa).b) == 0)
                    rsi = 1
            
            i += 1
            rbp_2 += 0x10
        while (i s< arg1[0x27].d)
        
        r13_1 = var_108_1
    
    int64_t* rcx_13 = data_143e1d988
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 8))(rcx_13)
        int64_t* rcx_14 = data_143e1d988
        
        if (rcx_14 != 0)
            (**rcx_14)(rcx_14, 1)
        
        data_143e1d988 = 0
    
    int64_t* rcx_15 = *arg1
    char var_128
    
    if (((rcx_15[1].d u>> 0xa).b & 1) == 0 || (arg1[0x29].b & 1) != 0)
        char rbx_2 = var_118_1.b
        int32_t rdx_13
        
        if (rbx_2 == 0 || ((r13_1[1].d u>> 0x1a).b & 1) != 0)
            rdx_13 = *(r13_1 + 0xcc)
        
        if ((rbx_2 != 0 && ((r13_1[1].d u>> 0x1a).b & 1) == 0) || ((rdx_13 u>> 0xa).b & 1) != 0)
            var_128.q = 0
            sub_140ce1310(rcx_15, nullptr, nullptr, zx.d(rbx_2), var_128)
        else if (rbx_2 != 0 && ((r13_1[1].d u>> 0x1a).b & 1) != 0 && ((rdx_13 u>> 2).b & 1) != 0)
            var_128.q = 0
            sub_140ce1310(rcx_15, r13_1, nullptr, 0, var_128)
        
        if (r12.b == 0)
            goto label_140d264e1
        
        int64_t rax_27 = r13_1[0x23]
        
        if (rax_27 == 0 || rax_27 != arg1[1] || ((*(r13_1 + 0xcc) u>> 0x12).b & 1) != 0)
            rcx_15.b = 1
        else
            rcx_15.b = 0
        
        if (rbx_2 == 0)
            if (((*(r13_1 + 0xcc) u>> 0x17).b & 1) != 0 && rcx_15.b != 0)
                goto label_140d264dc
        else if (*(arg1 + 0x11) != 0 && ((*(r13_1 + 0xcc) u>> 0x17).b & 1) != 0 && rcx_15.b != 0)
        label_140d264dc:
            r12.b = 1
            goto label_140d264f4
    
label_140d264e1:
    
    if (rsi.b != 0)
        r12.b = 0
    label_140d264f4:
        void var_f8
        sub_140bd5c10(&var_f8, 0)
        void* rax_32 = arg1[3]
        void* rbp_3 = &var_f8
        
        if (rax_32 != 0)
            rbp_3 = rax_32
        
        sub_140bd8120(rbp_3, *arg1, arg1[1])
        void* i_3 = arg1[0x26]
        void* i_1 = &arg1[0x16]
        
        if (i_3 != 0)
            i_1 = i_3
        
        for (void* r14_6 = (sx.q(arg1[0x27].d) << 4) + i_1; i_1 != r14_6; i_1 += 0x10)
            sub_140bd8120(rbp_3, *i_1, *(i_1 + 8))
        
        if (r12.b != 0)
            void* rax_33 = arg1[1]
            void* const r9_6
            
            if (rax_33 != 0)
                r9_6 = *(rax_33 + 0x10)
            else
                rax_33 = sub_140d209c0(*arg1)
                
                if (rax_33 == 0)
                    r9_6 = nullptr
                else
                    r9_6 = *(rax_33 + 0x10)
            
            int64_t rdx_18 = *arg1
            var_128.q = rdx_18
            sub_140be1be0(r13_1, rdx_18, rax_33, r9_6, var_128, rbp_3)
        
        if (rsi.b != 0)
            int32_t i_2 = 0
            
            if (arg1[0x27].d s> 0)
                int64_t rsi_2 = 0
                
                do
                    void** rax_34 = arg1[0x26]
                    void** r8_9 = &arg1[0x16]
                    
                    if (rax_34 != 0)
                        r8_9 = rax_34
                    
                    void* rcx_21 = *(r8_9 + rsi_2)
                    
                    if (((*(rcx_21 + 8) u>> 0xa).b & 1) == 0 || (arg1[0x29].b & 1) != 0)
                        void* r8_10 = *(r8_9 + rsi_2 + 8)
                        var_128.q = rcx_21
                        sub_140be1be0(*(rcx_21 + 0x10), rcx_21, r8_10, *(r8_10 + 0x10), var_128, 
                            rbp_3)
                    
                    i_2 += 1
                    rsi_2 += 0x10
                while (i_2 s< arg1[0x27].d)
        
        void var_90
        sub_1405ae080(&var_90)
        void var_e0
        sub_1405ae080(&var_e0)
    
    int64_t* rcx_25 = *arg1
    (*(*rcx_25 + 0x40))(rcx_25)
    (*(*r13_1 + 0x310))(r13_1, *arg1)
    int64_t* result_2 = *arg1
    
    if (((result_2[1].d u>> 0xa).b & 1) != 0)
        result = result_2
    
    if (((result_2[1].d u>> 0xa).b & 1) == 0 || (arg1[0x29].b & 1) != 0)
        int64_t rdx_21 = arg1[3]
        
        if (rdx_21 != 0)
            result = result_2
        
        if (rdx_21 == 0 || *(rdx_21 + 0x11) != 0)
            sub_140cd8040(result_2, 0)
            result = *arg1
    
    result[1].d &= 0xfffffdff
    *arg1 = 0

__security_check_cookie(result_1 ^ &var_148)
return result
