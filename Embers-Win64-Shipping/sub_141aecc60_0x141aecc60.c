// 函数: sub_141aecc60
// 地址: 0x141aecc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
char* r14 = arg2
*(arg1 + 0x5a4) = 0
char rax = sub_141ace2d0(arg1)
void* r15 = arg1[0xca]
void* rsi

if (r15 == 0)
    rsi = nullptr
else
    rsi = sub_140d21950(r15, sub_141ae8e30())

void* rax_3 = sub_141ae8e30()
char rax_5 = sub_140be1130(sub_141ae32c0(), rax_3)
int64_t rbp
rbp.b = 0

if (rax_5 != 0)
    int64_t* rax_6 = sub_141ae32c0()
    void* rbx_1 = rax_6[0x23]
    
    if (rbx_1 != 0)
    label_141aecd16:
        void* rax_8 = sub_140d21950(rbx_1, sub_141ae8e30())
        
        if (rax_8 == 0)
            rbp.b = 0
        else
            int64_t rdx_4 = *rax_8
            
            if ((*(rdx_4 + 0x20))(rax_8, rdx_4) == 0)
                rbp.b = 0
            else
                rbp.b = 1
    else
        int64_t rdx_2 = *rax_6
        (*(rdx_2 + 0x390))(rax_6, rdx_2)
        rbx_1 = rax_6[0x23]
        
        if (rbx_1 != 0)
            goto label_141aecd16
        
        rbp.b = 0
    
    r14 = arg2

char* arg_10
char* rbx_3

if (rax == 0 || rsi != 0)
    void* rax_26 = sub_141ae32c0()
    void* rdx_11 = *(r15 + 0x10)
    int64_t rax_27
    
    if (rax_26 != 0)
        rax_27 = sx.q(*(rax_26 + 0x38))
    
    if (rax_26 != 0 && rax_27.d s<= *(rdx_11 + 0x38)
            && *(*(rdx_11 + 0x30) + (rax_27 << 3)) == rax_26 + 0x30)
        rbx_3 = arg1[0xca]
    label_141aece12:
        
        if (rbx_3 == 0)
            return nullptr
        
    label_141aece17:
        void* rax_20 = sub_141ae32c0()
        void* rdx_9 = *(rbx_3 + 0x10)
        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
        
        if (rax_21.d s> *(rdx_9 + 0x38) || *(*(rdx_9 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
            return nullptr
        
        return rbx_3
    
    if (rsi != 0)
        char* rax_30 = (*(*rsi + 0x10))(rsi)
        rbx_3 = rax_30
        
        if (rax_30 != 0)
            void* rax_35 = sub_141ae32c0()
            void* rdx_14 = *(rbx_3 + 0x10)
            int64_t rax_36
            
            if (rax_35 != 0)
                rax_36 = sx.q(*(rax_35 + 0x38))
            
            if (rax_35 != 0 && rax_36.d s<= *(rdx_14 + 0x38)
                    && *(*(rdx_14 + 0x30) + (rax_36 << 3)) == rax_35 + 0x30)
                goto label_141aece17
            
            if (rax_5 != 0 && rbp.b != 0 && (*(*rsi + 0x20))(rsi) == 0)
                arg_10 = nullptr
                void* rax_41 = sub_140596910(arg1, sub_141ae32c0(), 0, 0, 0, 0, 0)
                void* rsi_1
                
                if (rax_41 == 0)
                    rsi_1 = nullptr
                else
                    rsi_1 = sub_140d21950(rax_41, sub_141ae8e30())
                
                if ((*(*rsi_1 + 0x20))(rsi_1) != 0)
                    arg1[0xca] = rax_41
                    (*(*rsi_1 + 0x18))(rsi_1, rbx_3)
                    sub_141e05a00(arg1[0xca], 0)
                    *r14 = 1
                    rbx_3 = arg1[0xca]
                    void* rax_47
                    int64_t rax_48
                    void* rdx_18
                    
                    if (rbx_3 != 0)
                        rax_47 = sub_141ae32c0()
                        rdx_18 = *(rbx_3 + 0x10)
                        rax_48 = sx.q(*(rax_47 + 0x38))
                    
                    if (rbx_3 == 0 || rax_48.d s> *(rdx_18 + 0x38)
                            || *(*(rdx_18 + 0x30) + (rax_48 << 3)) != rax_47 + 0x30)
                        return nullptr
                    
                    return rbx_3
        else if ((*(*rsi + 0x20))(rsi) != 0)
            arg_10 = rbx_3
            char* rax_34 = sub_140596910(arg1, sub_141ae32c0(), rbx_3, 0, rbx_3, rbx_3.b, rbx_3)
            sub_141e05a00(rax_34, 0)
            int64_t r8_7 = *rsi
            (*(r8_7 + 0x18))(rsi, rax_34, r8_7)
            *r14 = 1
            return rax_34
    else if (rax_5 != 0 && rbp.b != 0)
        arg_10 = nullptr
        void* rax_51 = sub_140596910(arg1, sub_141ae32c0(), 0, 0, 0, 0, 0)
        void* rbx_6
        
        if (rax_51 == 0)
            rbx_6 = nullptr
        else
            rbx_6 = sub_140d21950(rax_51, sub_141ae8e30())
        
        if ((*(*rbx_6 + 0x20))(rbx_6) != 0)
            arg1[0xca] = rax_51
            (*(*rbx_6 + 0x18))(rbx_6, r15)
            sub_141e05a00(arg1[0xca], 0)
            *r14 = 1
            rbx_3 = arg1[0xca]
            void* rax_57
            int64_t rax_58
            void* rdx_22
            
            if (rbx_3 != 0)
                rax_57 = sub_141ae32c0()
                rdx_22 = *(rbx_3 + 0x10)
                rax_58 = sx.q(*(rax_57 + 0x38))
            
            if (rbx_3 == 0 || rax_58.d s> *(rdx_22 + 0x38)
                    || *(*(rdx_22 + 0x30) + (rax_58 << 3)) != rax_57 + 0x30)
                return nullptr
            
            return rbx_3
else
    if (sub_141f3ba00(arg1) != 2)
        sub_141f477c0(arg1, (rsi + 2).d)
    
    void* rbx_2 = arg1[0xca]
    
    if (rbx_2 == 0)
    label_141aece46:
        arg_10 = nullptr
        char* rax_24 = sub_140596910(arg1, sub_141ae32c0(), 0, 0, 0, 0, 0)
        arg1[0xca] = rax_24
        sub_141e05a00(rax_24, 0)
        *r14 = 1
        return rax_24
    
    void* rax_11 = sub_141ae32c0()
    void* rdx_6 = *(rbx_2 + 0x10)
    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
    
    if (rax_12.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
        goto label_141aece46
    
    void* rax_14 = sub_141ae32c0()
    void* rdx_7 = *(arg1[0xca] + 0x10)
    
    if (rax_14 == 0)
        goto label_141aece46
    
    int64_t rax_15 = sx.q(*(rax_14 + 0x38))
    
    if (rax_15.d s> *(rdx_7 + 0x38) || *(*(rdx_7 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
        goto label_141aece46
    
    void* rax_17 = sub_141ae32c0()
    rbx_3 = arg1[0xca]
    void* rdx_8 = *(rbx_3 + 0x10)
    
    if (rax_17 != 0)
        int64_t rax_18 = sx.q(*(rax_17 + 0x38))
        
        if (rax_18.d s<= *(rdx_8 + 0x38) && *(*(rdx_8 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
            goto label_141aece12
return nullptr
