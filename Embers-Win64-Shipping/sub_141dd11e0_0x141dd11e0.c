// 函数: sub_141dd11e0
// 地址: 0x141dd11e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* arg_10 = arg2
*(arg2 + 0x8c) = 2
int64_t rbp_1 = sx.q(*(arg1 + 0x208))
uint64_t rax = zx.q((rbp_1 + 1).d)
*(arg1 + 0x208) = rax.d

if (rax.d s> *(arg1 + 0x20c))
    sub_1405a4d70(arg1 + 0x200)

*(*(arg1 + 0x200) + (rbp_1 << 3)) = arg2

if ((*(arg1 + 0x168) & 1) != 0)
    uint32_t rdx_2 = (arg1 u>> 4).d
    void* arg_20 = arg1
    int32_t rcx_3 = (0x9e3779b9 - rdx_2) ^ rdx_2 << 8
    int32_t rbp_4 = neg.d(rcx_3 + rdx_2) ^ rcx_3 u>> 0xd
    int32_t rdx_5 = (rdx_2 - rcx_3 - rbp_4) ^ rbp_4 u>> 0xc
    int32_t rcx_6 = (rcx_3 - rdx_5 - rbp_4) ^ rdx_5 << 0x10
    int32_t rbp_7 = (rbp_4 - rcx_6 - rdx_5) ^ rcx_6 u>> 5
    int32_t rdx_8 = (rdx_5 - rcx_6 - rbp_7) ^ rbp_7 u>> 3
    int32_t rcx_9 = (rcx_6 - rdx_8 - rbp_7) ^ rdx_8 << 0xa
    int32_t rbp_10 = (rbp_7 - rcx_9 - rdx_8) ^ rcx_9 u>> 0xf
    void* arg_18
    void* r8_5
    
    if (data_143a2d1d8 == data_143a2d1fc)
    label_141dd136e:
        arg_18 = &arg_20
        int32_t var_38
        sub_141dba680(&data_143a2d050, &var_38)
        int64_t* var_30
        sub_141db1fa0(&arg_18, var_30)
        var_30[0xb].d = 0xffffffff
        sub_141dc16e0(&data_143a2d050, &arg_18, rbp_10, var_30, var_38, nullptr)
        void* rax_23 = data_143a2d1d0
        void* r8_4 = &data_143a2d050
        
        if (rax_23 != 0)
            r8_4 = rax_23
        
        r8_5 = r8_4 + sx.q(arg_18.d) * 0x60
    else
        void* rdx_9 = data_143a2d208
        void* rax_19 = &data_143a2d200
        
        if (rdx_9 != 0)
            rax_19 = rdx_9
        
        int32_t rax_20 = *(rax_19 + ((sx.q(data_143a2d210 - 1) & sx.q(rbp_10)) << 2))
        
        if (rax_20 == 0xffffffff)
            goto label_141dd136e
        
        void* rdx_10 = data_143a2d1d0
        void* r8_1 = &data_143a2d050
        
        if (rdx_10 != 0)
            r8_1 = rdx_10
        
        int64_t* rcx_15
        
        while (true)
            rcx_15 = sx.q(rax_20) * 0x60
            
            if (*(rcx_15 + r8_1) == arg1)
                break
            
            void* rax_21 = &data_143a2d050
            
            if (rdx_10 != 0)
                rax_21 = rdx_10
            
            rax_20 = *(rax_21 + rcx_15 + 0x58)
            
            if (rax_20 == 0xffffffff)
                goto label_141dd136e
        
        if (rax_20 == 0xffffffff)
            goto label_141dd136e
        
        void* r8_2 = &data_143a2d050
        
        if (rdx_10 != 0)
            r8_2 = rdx_10
        
        r8_5 = r8_2 + rcx_15
        
        if (r8_2 == neg.q(rcx_15))
            goto label_141dd136e
    
    void* rax_25 = sub_140d209c0(arg2)
    arg_18 = rax_25
    uint32_t rdx_15 = (rax_25 u>> 4).d
    int32_t r14_2 = (0x9e3779b9 - rdx_15) ^ rdx_15 << 8
    int32_t r10_3 = neg.d(r14_2 + rdx_15) ^ r14_2 u>> 0xd
    int32_t rdx_18 = (rdx_15 - r14_2 - r10_3) ^ r10_3 u>> 0xc
    int32_t r14_5 = (r14_2 - rdx_18 - r10_3) ^ rdx_18 << 0x10
    int32_t r10_6 = (r10_3 - r14_5 - rdx_18) ^ r14_5 u>> 5
    int32_t rdx_21 = (rdx_18 - r14_5 - r10_6) ^ r10_6 u>> 3
    int32_t r14_8 = (r14_5 - rdx_21 - r10_6) ^ rdx_21 << 0xa
    int32_t r10_9 = (r10_6 - r14_8 - rdx_21) ^ r14_8 u>> 0xf
    
    if (*(r8_5 + 0x10) == *(r8_5 + 0x3c))
    label_141dd14d7:
        rax = sub_1419de140(r8_5 + 8, r10_9, &arg_18)
    else
        void* rcx_22 = *(r8_5 + 0x48)
        void* r8_6 = r8_5 + 0x40
        
        if (rcx_22 != 0)
            r8_6 = rcx_22
        
        int32_t rax_40 = *(r8_6 + (((sx.q(*(r8_5 + 0x50)) - 1) & sx.q(r10_9)) << 2))
        
        if (rax_40 == 0xffffffff)
        label_141dd14d7_1:
            rax = sub_1419de140(r8_5 + 8, r10_9, &arg_18)
        else
            int64_t r8_7 = *(r8_5 + 8)
            void* rcx_24
            
            while (true)
                int64_t rdx_25 = sx.q(rax_40) * 3
                rcx_24 = r8_7 + (rdx_25 << 3)
                
                if (*(r8_7 + (rdx_25 << 3)) == rax_25)
                    break
                
                rax_40 = *(rcx_24 + 0x10)
                
                if (rax_40 == 0xffffffff)
                    goto label_141dd14d7_2
            
            if (rax_40 == 0xffffffff || rcx_24 == 0)
            label_141dd14d7_2:
                rax = sub_1419de140(r8_5 + 8, r10_9, &arg_18)
            else
                rax = rcx_24 + 8
    
    *(arg2 + 0x84) = *rax
    *rax += 1

if ((*(arg2 + 0x88) & 0x10) != 0)
    sub_1405a7050(arg1 + 0x190, &arg_10)
