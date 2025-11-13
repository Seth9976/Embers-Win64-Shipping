// 函数: sub_140bb81a0
// 地址: 0x140bb81a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = *(arg1 + 0x290)
*(arg1 + 0x290) = r12 & 0xffefffff
void* r14 = arg2
EnterCriticalSection(&data_143e1a3e0)
void* const arg_20 = r14
int64_t arg_18
sub_140b91690(&data_1439a9730, &arg_18, &arg_20, nullptr)
LeaveCriticalSection(&data_143e1a3e0)
void* rax_2
int64_t rax_3
void* rdx_1

if (r14 != 0)
    rax_2 = sub_140bdf2e0()
    rdx_1 = *(r14 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

void* r13

if (r14 == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    r13 = nullptr
else
    r13 = r14

int32_t rdx_2 = *(arg1 + 0x358)
int32_t i = 0

if (rdx_2 s> 0)
    if (*(**(arg1 + 0x350) + 8) == 0)
        i = *(arg1 + 0x10)
    
    if (rdx_2 s> 0)
        arg_18 = 0
        int64_t rbx_1 = arg_18
        
        do
            int32_t rcx_4 = *(arg1 + 0x358)
            int64_t r10_1 = *(arg1 + 0x350)
            int64_t* rbp_1 = *(r10_1 + (sx.q(rcx_4 - 1) << 3))
            
            if (0 != 0)
                memmove(r10_1 + (sx.q(rcx_4 - 1) << 3), r10_1 + (sx.q(rcx_4) << 3), 0 << 3)
                rcx_4 = *(arg1 + 0x358)
            
            *(arg1 + 0x358) = rcx_4 - 1
            sub_1405c53d0(arg1 + 0x350)
            sub_140bb8de0(arg1, rbp_1, r13, rbx_1)
        while (*(arg1 + 0x358) s> 0)

if (i s< *(arg1 + 0x10))
    int64_t r12_1 = sx.q(i) * 0x38
    
    do
        if (sub_140bab540(arg1) == 0)
            break
        
        void* rbp_3 = *(arg1 + 8) + r12_1
        int64_t rdi_2 = *(rbp_3 + 0x28)
        
        if (rdi_2 != 0)
        label_140bb834b:
            void* rax_16 = *(rdi_2 + 0xa0)
            
            if (rax_16 != 0 && ((*(rax_16 + 8) u>> 0x13).b & 1) == 0)
                int32_t rbx_3 = *(arg1 + 0x290) & 0x2082
                int16_t* r14_1
                
                if (*(rdi_2 + 0x1e8) == 0)
                    r14_1 = &data_142d40450
                else
                    r14_1 = *(rdi_2 + 0x1e0)
                
                int64_t var_80_1 = sub_140baa940()
                sub_140d24110(nullptr, r14_1, rbx_3, arg1, nullptr)
        else
            void* rcx_8 = *(rbp_3 + 0x20)
            
            if (rcx_8 != 0)
                int64_t rax_15 = sub_140d3cb50(rcx_8)
                rdi_2 = rax_15
                
                if (rax_15 != 0)
                    goto label_140bb834b
        
        void* rbx_4 = *(rbp_3 + 0x20)
        
        if (rbx_4 != 0)
            void* rax_18 = sub_140cddb10()
            void* rdx_6 = *(rbx_4 + 0x10)
            int64_t rax_19 = sx.q(*(rax_18 + 0x38))
            
            if (rax_19.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30)
                void* rbx_5 = *(rbp_3 + 0x20)
                
                if (rbx_5 != 0)
                    void* rax_21 = sub_140cddc80()
                    void* rdx_8 = *(rbx_5 + 0x10)
                    int64_t rax_22 = sx.q(*(rax_21 + 0x38))
                    
                    if (rax_22.d s> *(rdx_8 + 0x38)
                            || *(*(rdx_8 + 0x30) + (rax_22 << 3)) != rax_21 + 0x30)
                        void* rbx_6 = *(rbp_3 + 0x20)
                        
                        if (rbx_6 != 0)
                            void* rax_27 = sub_140bdfe30()
                            void* rdx_12 = *(rbx_6 + 0x10)
                            int64_t rax_28 = sx.q(*(rax_27 + 0x38))
                            
                            if (rax_28.d s<= *(rdx_12 + 0x38)
                                    && *(*(rdx_12 + 0x30) + (rax_28 << 3)) == rax_27 + 0x30
                                    && rdi_2 != 0)
                                sub_140bb81a0(rdi_2, rbx_6)
                    else
                        void* rax_24 = sub_140bdf0a0(rbx_5)
                        
                        if (rax_24 != 0)
                            void* rax_25 = sub_140cddb10()
                            void* rcx_16 = *(rax_24 + 0x10)
                            int64_t rdx_9 = sx.q(*(rax_25 + 0x38))
                            
                            if (rdx_9.d s<= *(rcx_16 + 0x38)
                                    && *(*(rcx_16 + 0x30) + (rdx_9 << 3)) == rax_25 + 0x30)
                                arg_20 = nullptr
                                sub_140bb8de0(arg1, rax_24 + 0x230, r13, 0)
                        
                        sub_140bb8de0(arg1, rbx_5 + 0xe0, r13, 0)
            else
                arg_18 = 0
                sub_140bb8de0(arg1, rbx_4 + 0x230, r13, arg_18)
        
        i += 1
        r12_1 += 0x38
    while (i s< *(arg1 + 0x10))
    
    r14 = arg2

while (*(arg1 + 0x368) - *(arg1 + 0x394) s> 0)
    int32_t r8_12 = 0
    int32_t var_60_1 = 0xffffffff
    void* r10_2 = arg1 + 0x370
    int32_t var_5c_1 = 0
    int32_t r11_1 = *(r10_2 + 0x18)
    int32_t r9_5 = 0
    
    if (r11_1 != 0)
        void* rax_32 = *(r10_2 + 0x10)
        
        if (rax_32 != 0)
            r10_2 = rax_32
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rcx_22 = *r10_2
        int32_t var_5c_3
        
        if (rcx_22 != 0)
        label_140bb8595:
            int32_t rax_39 = neg.d(rcx_22) & rcx_22
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_39)
            int32_t rax_40
            
            if (rax_39 == 0)
                rax_40 = 0x20
            else
                rax_40 = 0x1f - temp0_2
            
            int32_t var_5c_2 = r9_5 - rax_40 + 0x1f
            
            if (r9_5 - rax_40 + 0x1f s> r11_1)
                var_5c_3 = r11_1
        else
            while (true)
                int64_t rcx_23 = sx.q(r8_12)
                r9_5 += 0x20
                r8_12 += 1
                
                if (rcx_23.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rcx_22 = *(r10_2 + (rcx_23 << 2) + 4)
                int32_t var_60_2 = 0xffffffff
                
                if (rcx_22 != 0)
                    goto label_140bb8595
            
            var_5c_3 = r11_1
    
    void* rax_42 = *(arg1 + 0x360)
    int64_t rbx_7 = *rax_42
    sub_140bb8de0(arg1, *(rax_42 + 8), r13, rbx_7)
    sub_140943590(arg1 + 0x360, rbx_7)

void* rbx_8 = *(r14 + 0x40)

if (rbx_8 != 0)
    int64_t rax_45 = sub_140d3cb50(rbx_8)
    
    if (rax_45 != 0 && sub_140bab540(rax_45) != 0)
        sub_140bb81a0(rax_45, rbx_8)

EnterCriticalSection(&data_143e1a3e0)
sub_1409740e0(&data_1439a9730, r14)
int64_t result = LeaveCriticalSection(&data_143e1a3e0)
*(arg1 + 0x290) = r12
return result
