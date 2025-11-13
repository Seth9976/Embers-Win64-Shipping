// 函数: sub_140e89440
// 地址: 0x140e89440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int32_t r13 = 0
int32_t var_320 = 0
int32_t r15 = arg2
void* r14 = arg1
sub_140e85470(arg1, arg2)
char result

if (sub_140db3500(arg4) == 0)
label_140e899ce:
    int64_t* rbx_12 = arg3[1]
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp1_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_12 + 8))(rbx_12, 1)
    
    result = 0
else
    int64_t var_350 = *arg3
    int64_t* rax_3 = arg3[1]
    int64_t* var_348_1 = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d += 1
    
    char var_310
    sub_140da8ef0(arg4, &var_310, &var_350)
    int64_t* var_338
    void var_308
    void* var_1e8
    int32_t var_1e0
    int64_t* rbx_1
    int64_t rdi
    
    if (sub_140db3500(&var_310) == 0)
        rbx_1 = var_338
        rdi.b = 1
    else
        void* rdx_1 = &var_308
        r13 = 1
        
        if (var_1e8 != 0)
            rdx_1 = var_1e8
        
        int64_t rax_8 = sx.q(var_1e0 - 1) * 9
        rbx_1 = *(rdx_1 + (rax_8 << 3) + 0x40)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (*(rdx_1 + (rax_8 << 3) + 0x38) != *arg3)
            rdi.b = 1
        else
            rdi.b = 0
    
    if ((r13.b & 1) != 0)
        r13 &= 0xfffffffe
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_340
    
    if (rdi.b != 0)
        int64_t* rax_11 = sub_140db22a0(arg4, &var_340)
        var_350 = *rax_11
        void* rdx_4 = rax_11[1]
        void* var_348_2 = rdx_4
        
        if (rdx_4 != 0)
            *(rdx_4 + 8) += 1
        
        char var_1b0
        sub_140d963a0(&var_310, sub_140da8ef0(arg4, &var_1b0, &var_350))
        void var_60
        sub_140596d80(&var_60)
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t temp6_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        void var_1a8
        int512_t zmm1_1 = sub_140d94d20(&var_1a8)
        
        if (var_338 != 0)
            var_338[1].d -= 1
            
            if (var_338[1].d == 1)
                (**var_338)(var_338)
                int32_t temp7_1 = *(var_338 + 0xc)
                *(var_338 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_338 + 8))(var_338, 1)
        
        int64_t* rbx_4 = arg3[1]
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
        
        var_350 = *arg3
        var_348_1 = rbx_4
        
        if (rbx_4 != 0)
            int32_t rax_18 = rbx_4[1].d
            rbx_4[1].d = rax_18
            
            if (rax_18 == 0)
                (**rbx_4)(rbx_4)
                int32_t temp11_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        void* rdx_7 = &var_308
        char r9 = data_1439ae51c
        var_1b0 = r9
        int32_t var_7c_1 = 4
        
        if (var_1e8 != 0)
            rdx_7 = var_1e8
        
        void* var_88_1 = nullptr
        int32_t var_80_1 = 0
        char var_78_1 = 0
        sub_140d90c10(&var_350, rdx_7 + sx.q(var_1e0 - 1) * 0x48, &var_1b0, r9, zmm1_1)
        int32_t rcx_20 = var_80_1
        int32_t i = 0
        int32_t temp9_1
        int32_t temp10_1
        temp9_1:temp10_1 = sx.q(rcx_20)
        
        if ((temp10_1 - temp9_1) s>> 1 s> 0)
            rdi = 0
            int64_t rbx_5 = sx.q(rcx_20 - 1)
            int64_t r14_1 = 0
            int64_t rsi_2 = rbx_5 * 0x48
            int32_t temp20_1
            int32_t temp21_1
            
            do
                if (rdi != rbx_5)
                    void* rcx_21 = &var_1a8
                    
                    if (var_88_1 != 0)
                        rcx_21 = var_88_1
                    
                    sub_140a4bff0(rcx_21 + r14_1, rsi_2 + rcx_21, 0x48)
                    rcx_20 = var_80_1
                
                i += 1
                temp20_1:temp21_1 = sx.q(rcx_20)
                rdi += 1
                rsi_2 -= 0x48
                rbx_5 -= 1
                r14_1 += 0x48
            while (i s< (temp21_1 - temp20_1) s>> 1)
            r14 = arg1
        
        int32_t rbx_6 = 0
        
        if (rcx_20 s> 0)
            do
                void* rdx_12 = &var_1a8
                
                if (var_88_1 != 0)
                    rdx_12 = var_88_1
                
                sub_140d99900(&var_310, rdx_12 + sx.q(rbx_6) * 0x48)
                rbx_6 += 1
            while (rbx_6 s< var_80_1)
        
        sub_140d94d20(&var_1a8)
        
        if (var_348_1 != 0)
            var_348_1[1].d -= 1
            
            if (var_348_1[1].d == 1)
                (**var_348_1)(var_348_1)
                int32_t temp23_1 = *(var_348_1 + 0xc)
                *(var_348_1 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*var_348_1 + 8))(var_348_1, 1)
        
        r15 = arg2
    
    int64_t* rbx_8
    
    if (sub_140db3500(&var_310) == 0)
        rbx_8 = var_338
        rdi.b = 0
    else
        void* rdx_14 = &var_308
        r13 |= 2
        
        if (var_1e8 != 0)
            rdx_14 = var_1e8
        
        int64_t rax_42 = sx.q(var_1e0 - 1) * 9
        rbx_8 = *(rdx_14 + (rax_42 << 3) + 0x40)
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
        
        if (*(rdx_14 + (rax_42 << 3) + 0x38) != *arg3)
            rdi.b = 0
        else
            rdi.b = 1
    
    if ((r13.b & 2) != 0 && rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp14_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* var_1c8
    void var_1c0
    
    if (rdi.b == 0)
        sub_140596d80(&var_1c0)
        
        if (var_1c8 != 0)
            var_1c8[1].d -= 1
            
            if (var_1c8[1].d == 1)
                (**var_1c8)(var_1c8)
                int32_t temp15_1 = *(var_1c8 + 0xc)
                *(var_1c8 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*var_1c8 + 8))(var_1c8, 1)
        
        sub_140d94d20(&var_308)
        goto label_140e899ce
    
    sub_140d94220(&var_340, &var_310)
    sub_140e59330(r14 + 0x130, &var_350)
    char* var_360_1 = nullptr
    *var_348_1 = r15
    var_348_1[1] = 0
    var_348_1[1] = var_340
    __builtin_memset(&var_340, 0, 0x20)
    var_348_1[2].d = var_338.d
    *(var_348_1 + 0x14) = var_338:4.d
    int64_t var_330
    var_348_1[3] = var_330
    int64_t var_328
    var_348_1[4] = var_328
    var_348_1[5].d = 0xffffffff
    sub_140e61080(r14 + 0x130, &var_320, *var_348_1, var_348_1, var_350.d, var_360_1)
    int64_t* var_328_1
    
    if (var_328_1 != 0)
        int32_t temp13_1 = *(var_328_1 + 0xc)
        *(var_328_1 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_328_1 + 8))(var_328_1, 1)
    
    sub_140d94cb0(&var_340)
    sub_140596d80(&var_1c0)
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t temp18_1 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*var_1c8 + 8))(var_1c8, 1)
    
    sub_140d94d20(&var_308)
    int64_t* rbx_10 = arg3[1]
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            (**rbx_10)(rbx_10)
            int32_t temp22_1 = *(rbx_10 + 0xc)
            *(rbx_10 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*rbx_10 + 8))(rbx_10, 1)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_388)
return result
