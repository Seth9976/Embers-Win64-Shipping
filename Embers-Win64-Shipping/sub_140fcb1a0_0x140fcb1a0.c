// 函数: sub_140fcb1a0
// 地址: 0x140fcb1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5f8
int64_t rax_1 = __security_cookie ^ &var_5f8
int32_t rsi = 0
int32_t var_590 = 0
char r13 = arg3
*arg2 = 0
arg2[1] = 0
char nodeBuffer[0x410]

if (getnameinfo(&arg1[1], (*(*arg1 + 0xf8))(), &nodeBuffer, 0x401, nullptr, 0, 2) == 0)
    int16_t* var_5a0
    int64_t* rax_6 = (*(*arg1 + 0xa0))(arg1, &var_5a0)
    int64_t rdx_2 = data_143e2b878
    int64_t rcx_2 = *rax_6
    var_590.q = rcx_2
    int16_t* var_5b0
    int64_t rax_7
    
    if ((-0x8000000000000000 & rdx_2) == 0 || rcx_2 != 0)
        rax_7 = *sub_140b63580(&data_143e2b878, &var_5b0)
        rax_7.b = var_590.q == rax_7
    else
        int32_t* rcx_3 = &var_590
        char* rdx_3 = rdx_2 & 0x7fffffffffffffff
        
        if (data_143e2b884 != 0)
            rax_7 = sub_140b5b9d0(rcx_3, rdx_3)
        else
            rax_7 = sub_140b5b8c0(rcx_3, rdx_3)
    
    int64_t var_5a8
    uint8_t* var_5d8
    
    if (rax_7.b == 0)
        int16_t* rdi_5 = nullptr
        var_5b0 = nullptr
        int32_t r15_4 = 0
        var_5a8 = 0
        int32_t r12_2 = 0
        
        if (nodeBuffer[0] != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (nodeBuffer[rbx_5] != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_5b0, rbx_5.d + 1)
                r12_2 = var_5a8:4.d
                r15_4 = var_5a8.d
                rdi_5 = var_5b0
            
            r15_4 += rbx_5.d + 1
            var_5a8.d = r15_4
            
            if (r15_4 s> r12_2)
                sub_140594770(&var_5b0)
                r12_2 = var_5a8:4.d
                r15_4 = var_5a8.d
                rdi_5 = var_5b0
            
            var_5d8.w = 0x3f
            sub_1405a7220(rdi_5, rbx_5.d + 1, &nodeBuffer, rbx_5.d + 1, var_5d8.w)
            r13 = arg3
        
        if (arg2 != &var_5b0)
            int64_t rcx_25 = *arg2
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            *arg2 = rdi_5
            arg2[1].d = r15_4
            *(arg2 + 0xc) = r12_2
        else if (rdi_5 != 0)
            sub_140a74f90(rdi_5)
    else
        void* rdx_5 = nullptr
        void* var_478_1 = nullptr
        int64_t rax_9 = -1
        
        do
            rax_9 += 1
        while (nodeBuffer[rax_9] != 0)
        
        int32_t rdi_1 = (rax_9 + 1).d
        int32_t var_468_1 = rax_9.d
        
        if (rdi_1 u> 0x80 && rdi_1 != 0)
            void* rax_10 = sub_140a84c80(0, sx.q(rdi_1) * 2, 0)
            rdx_5 = rax_10
            var_478_1 = rax_10
        
        void var_578
        void* rcx_4 = &var_578
        
        if (rdx_5 != 0)
            rcx_4 = rdx_5
        
        var_5d8.w = 0x3f
        sub_1405a7220(rcx_4, rdi_1, &nodeBuffer, rdi_1, var_5d8.w)
        int32_t rdx_9 = 0
        var_5a8.d = 0
        int32_t rcx_5 = 0
        var_5a8:4.d = 0
        var_5b0 = nullptr
        
        if (rcx_4 != 0 && *rcx_4 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (*(rcx_4 + (rdi_2 << 1)) != 0)
            
            if (rdi_2.d + 1 s> 0)
                sub_1405947f0(&var_5b0, rdi_2.d + 1)
                rcx_5 = var_5a8:4.d
                rdx_9 = var_5a8.d
            
            int32_t rax_11 = rdx_9 + rdi_2.d + 1
            var_5a8.d = rax_11
            
            if (rax_11 s> rcx_5)
                sub_140594770(&var_5b0)
            
            UnDecorator::getReferenceType(var_5b0, rcx_4, (rdi_2.d + 1) * 2)
        
        if (var_478_1 != 0)
            sub_140a74f90(var_478_1)
        
        var_5a0 = nullptr
        int32_t var_598_1 = 0
        sub_1405947f0(&var_5a0, 2)
        int32_t r15_2 = var_598_1 + 2
        
        if (r15_2 s> 0)
            sub_140594770(&var_5a0)
        
        int16_t* r12_1 = var_5a0
        var_5d8.w = 0x3f
        sub_1405a7220(r12_1, 2, U"%", 2, var_5d8.w)
        var_5d8.d = 0xffffffff
        int16_t* const rdi_4 = &data_142d40450
        int32_t r15_3 = 1
        int16_t* rdx_13 = &data_142d40450
        
        if (r15_2 != 0)
            rdx_13 = r12_1
        
        int32_t rax_12 = sub_140a23cf0(&var_5b0, rdx_13, 0, 1, var_5d8.d)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        int32_t rcx_17 = var_5a8.d
        
        if (rax_12 != 0xffffffff)
            int32_t rax_13 = rcx_17 - 1
            
            if (rcx_17 == 0)
                rax_13 = 0
            
            int32_t r10_1
            
            if (rax_12 s>= 0)
                r10_1 = rax_13
                
                if (rax_12 s< rax_13)
                    r10_1 = rax_12
            else
                r10_1 = 0
            
            int32_t rax_14 = rax_13 - r10_1
            int32_t rbx_2 = rcx_17 - 1
            
            if (rcx_17 == 0)
                rbx_2 = 0
            
            int32_t rbx_3 = rbx_2 - r10_1
            
            if (rax_14 s>= 0)
                if (rax_14 s< rbx_3)
                    rbx_3 = rax_14
                
                if (rbx_3 != 0)
                    int32_t rax_16 = rcx_17 - r10_1
                    
                    if (rax_16 != rbx_3)
                        int16_t* r9_2 = var_5b0
                        memmove(&r9_2[sx.q(r10_1)], &r9_2[sx.q(r10_1 + rbx_3)], 
                            (rax_16 - rbx_3) * 2)
                        rcx_17 = var_5a8.d
                    
                    rcx_17 -= rbx_3
                    var_5a8.d = rcx_17
        
        r13 = arg3
        wchar16* rdx_15
        int16_t** rbx_4
        
        if (r13 == 0)
            rbx_4 = &var_5a0
            r15_3 = 2
            rdx_15 = &data_142d40c4c
        else
            rbx_4 = &var_590
            rdx_15 = u"[%s]"
        
        if (rcx_17 != 0)
            rdi_4 = var_5b0
        
        sub_140a2e390(rbx_4, rdx_15, rdi_4)
        
        if (arg2 != rbx_4)
            int64_t rcx_19 = *arg2
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            *arg2 = *rbx_4
            *rbx_4 = nullptr
            arg2[1].d = rbx_4[1].d
            *(arg2 + 0xc) = *(rbx_4 + 0xc)
            rbx_4[1] = 0
        
        if ((r15_3.b & 2) != 0)
            int16_t* rcx_20 = var_5a0
            r15_3 &= 0xfffffffd
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
        
        if ((r15_3.b & 1) != 0)
            int64_t rcx_21 = var_590.q
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
        
        int16_t* rcx_26 = var_5b0
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    
    if (r13 != 0)
        sub_140a2e390(&var_5b0, u":%d", zx.q((*(*arg1 + 0x30))(arg1)))
        int32_t rax_25 = var_5a8.d
        
        if (rax_25 != 0)
            rsi = rax_25 - 1
        
        sub_140a20ba0(arg2, var_5b0, rsi)
        int16_t* rcx_30 = var_5b0
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)

__security_check_cookie(rax_1 ^ &var_5f8)
return arg2
