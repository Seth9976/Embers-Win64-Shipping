// 函数: sub_1423ea850
// 地址: 0x1423ea850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x20)
int64_t r12

if (sub_140d21d80(arg1) == sub_140cde0b0() || data_143de542d != 0)
    r12.b = 0
else
    r12.b = 1

int32_t rbx_1 = 0
int64_t var_38
void arg_8
int64_t rax_1

while (true)
    if (rbx_1 s< 0 || rbx_1 s>= *(arg1 + 0x48))
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (rax_1.b == 0)
        break
    
    int64_t rdx_1 = *(arg1 + 0x40)
    int64_t rcx = sx.q(rbx_1) * 5
    void* rdi_1 = rdx_1 + (rcx << 3)
    
    if (*(rdx_1 + (rcx << 3) + 0x20) != 0 && r12.b != 0 && *(rdi_1 + 0x10) == 0)
        void* rax_2 = sub_140cddea0()
        void* rdx_2 = *(rdi_1 + 0x20)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        void* r8_1 = *(*(rdx_2 + 0x20) + 0x10)
        
        if (rax_3.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            int64_t* rax_4 = sub_1423e9720(&var_38, rdx_2, r15)
            int16_t* rdx_3
            
            if (rax_4[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *rax_4
            
            int64_t* rax_5 = sub_140b58260(&arg_8, rdx_3, 1)
            rax_1 = sub_140998b80(*(rdi_1 + 0x20), r15, *rax_5)
            int64_t rcx_6 = var_38
            *(rdi_1 + 0x20) = rax_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
    
    rbx_1 += 1

int32_t rdi_2 = 0

while (true)
    if (rdi_2 s< 0 || rdi_2 s>= *(arg1 + 0x38))
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (rax_1.b == 0)
        break
    
    int64_t rdx_5 = *(arg1 + 0x30)
    int64_t rcx_7 = sx.q(rdi_2) * 5
    void* rsi_1 = rdx_5 + (rcx_7 << 3)
    
    if (*(rdx_5 + (rcx_7 << 3) + 0x20) != 0 && r12.b != 0 && *(rsi_1 + 0x10) == 0)
        void* rax_6 = sub_140cddea0()
        void* rdx_6 = *(rsi_1 + 0x20)
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        void* r8_4 = *(*(rdx_6 + 0x20) + 0x10)
        
        if (rax_7.d s> *(r8_4 + 0x38) || *(*(r8_4 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
            int64_t* rax_8 = sub_1423e9720(&var_38, rdx_6, r15)
            int16_t* rdx_7
            
            if (rax_8[1].d == 0)
                rdx_7 = &data_142d40450
            else
                rdx_7 = *rax_8
            
            int64_t* rax_9 = sub_140b58260(&arg_8, rdx_7, 1)
            void* rbp_1 = *(rsi_1 + 0x20)
            void* rdx_8 = r15
            int64_t rbx_2 = *rax_9
            
            if (rbp_1 == 0)
                rax_1 = 0
            else
                if (((r15 + 1) & 0xfffffffffffffffe) == 0)
                    rdx_8 = sub_140cde0b0()
                
                int32_t var_48_1 = 0x7f800000
                rax_1 = sub_140d2e1f0(rbp_1, rdx_8, rbx_2, 0xfffffff, 0, 0)
            
            int64_t rcx_13 = var_38
            *(rsi_1 + 0x20) = rax_1
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
    
    rdi_2 += 1

int32_t rdi_3 = 0

while (true)
    if (rdi_3 s< 0 || rdi_3 s>= *(arg1 + 0x58))
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (rax_1.b == 0)
        break
    
    int64_t rdx_9 = *(arg1 + 0x50)
    int64_t rcx_14 = sx.q(rdi_3) * 5
    void* rsi_2 = rdx_9 + (rcx_14 << 3)
    
    if (*(rdx_9 + (rcx_14 << 3) + 0x20) != 0 && r12.b != 0 && *(rsi_2 + 0x10) == 0)
        void* rax_12 = sub_140cddea0()
        void* rdx_10 = *(rsi_2 + 0x20)
        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
        void* r8_7 = *(*(rdx_10 + 0x20) + 0x10)
        
        if (rax_13.d s> *(r8_7 + 0x38) || *(*(r8_7 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
            int64_t* rax_14 = sub_1423e9720(&var_38, rdx_10, r15)
            int16_t* rdx_11
            
            if (rax_14[1].d == 0)
                rdx_11 = &data_142d40450
            else
                rdx_11 = *rax_14
            
            int64_t* rax_15 = sub_140b58260(&arg_8, rdx_11, 1)
            void* rbp_2 = *(rsi_2 + 0x20)
            void* rdx_12 = r15
            int64_t rbx_3 = *rax_15
            
            if (rbp_2 == 0)
                rax_1 = 0
            else
                if (((r15 + 1) & 0xfffffffffffffffe) == 0)
                    rdx_12 = sub_140cde0b0()
                
                int32_t var_48_2 = 0x7f800000
                rax_1 = sub_140d2e1f0(rbp_2, rdx_12, rbx_3, 0xfffffff, 0, 0)
            
            int64_t rcx_20 = var_38
            *(rsi_2 + 0x20) = rax_1
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
    
    rdi_3 += 1

int32_t rdi_4 = 0

while (true)
    if (rdi_4 s< 0 || rdi_4 s>= *(arg1 + 0x68))
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (rax_1.b == 0)
        break
    
    int64_t rdx_13 = *(arg1 + 0x60)
    int64_t rcx_21 = sx.q(rdi_4) * 5
    void* rsi_3 = rdx_13 + (rcx_21 << 3)
    
    if (*(rdx_13 + (rcx_21 << 3) + 0x20) != 0 && r12.b != 0 && *(rsi_3 + 0x10) == 0)
        void* rax_18 = sub_140cddea0()
        void* rdx_14 = *(rsi_3 + 0x20)
        int64_t rax_19 = sx.q(*(rax_18 + 0x38))
        void* r8_10 = *(*(rdx_14 + 0x20) + 0x10)
        
        if (rax_19.d s> *(r8_10 + 0x38) || *(*(r8_10 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30)
            int64_t* rax_20 = sub_1423e9720(&var_38, rdx_14, r15)
            int16_t* rdx_15
            
            if (rax_20[1].d == 0)
                rdx_15 = &data_142d40450
            else
                rdx_15 = *rax_20
            
            int64_t* rax_21 = sub_140b58260(&arg_8, rdx_15, 1)
            void* rbp_3 = *(rsi_3 + 0x20)
            void* rdx_16 = r15
            int64_t rbx_4 = *rax_21
            
            if (rbp_3 == 0)
                rax_1 = 0
            else
                if (((r15 + 1) & 0xfffffffffffffffe) == 0)
                    rdx_16 = sub_140cde0b0()
                
                int32_t var_48_3 = 0x7f800000
                rax_1 = sub_140d2e1f0(rbp_3, rdx_16, rbx_4, 0xfffffff, 0, 0)
            
            int64_t rcx_27 = var_38
            *(rsi_3 + 0x20) = rax_1
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
    
    rdi_4 += 1

*(arg1 + 0x80) = *sub_140b214c0(&var_38)
return sub_1423f49d0(arg1) __tailcall
