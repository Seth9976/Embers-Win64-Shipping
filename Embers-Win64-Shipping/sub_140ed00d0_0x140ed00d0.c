// 函数: sub_140ed00d0
// 地址: 0x140ed00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = nullptr
int32_t i_3 = 0
int32_t r9 = 0
int64_t* var_58 = nullptr
int32_t i = 0
int64_t var_50 = 0
int64_t* rbp = arg3
int64_t* r14 = arg2

if (arg1[0x10].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdi_2 = arg1[0xf] + r14_1
        int64_t rcx = *rdi_2
        
        if (rcx != 0)
            void* rax_1 = rdi_2[1]
            
            if (rax_1 != 0 && *(rax_1 + 8) s> 0)
                int64_t i_4 = sx.q(i_3)
                i_3 = (i_4 + 1).d
                var_50.d = i_3
                
                if (i_3 s> r9)
                    sub_1405a4f90(&var_58)
                    rcx = *rdi_2
                    r9 = var_50:4.d
                    i_3 = var_50.d
                    r15 = var_58
                
                int64_t rax_3 = i_4 * 2
                r15[rax_3] = rcx
                void* rcx_2 = rdi_2[1]
                r15[rax_3 + 1] = rcx_2
                
                if (rcx_2 != 0)
                    *(rcx_2 + 0xc) += 1
        
        i += 1
        r14_1 += 0x10
    while (i s< arg1[0x10].d)
    
    rbp = arg3
    r14 = arg2

sub_140e998a0(&arg1[0xf], &var_58)

if (i_3 != 0)
    int64_t* rdi_3 = &r15[1]
    int32_t i_1
    
    do
        int64_t* rcx_4 = *rdi_3
        
        if (rcx_4 != 0)
            int32_t temp1_1 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)
        
        rdi_3 = &rdi_3[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r15 != 0)
    sub_140a74f90(r15)

int64_t* rax_5 = TPI1::cbGpRec(*r14)
var_58 = *rax_5
var_50.d = rax_5[1].d
var_50:4.d = 3
char var_48 = 1
sub_140ed5550(arg1, &var_58)
int32_t i_2 = 0

if (arg1[0x10].d s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t* rsi = rbp[1]
        int64_t r8 = *rbp
        
        if (rsi != 0)
            rsi[1].d += 1
        
        int64_t* rdx_3 = arg1[0xf]
        void* rcx_8 = nullptr
        int64_t* rdi_4 = *(rdx_3 + r15_1 + 8)
        
        if (rdi_4 != 0)
            int32_t rax_7 = rdi_4[1].d
            
            if (rax_7 == 0)
                rdi_4 = nullptr
            else
                rdi_4[1].d = rax_7 + 1
                
                if (rdi_4 != 0)
                    rcx_8 = *(rdx_3 + r15_1)
        
        *(rcx_8 + 0x3f8) = 0
        void* rbp_1 = nullptr
        int64_t* rbx = *(rcx_8 + 0x3d0)
        
        if (rbx != 0)
            int32_t rax_9 = rbx[1].d
            
            if (rax_9 == 0)
                rbx = nullptr
            else
                rbx[1].d = rax_9 + 1
                
                if (rbx != 0)
                    rbp_1 = *(rcx_8 + 0x3c8)
        
        if (*(rcx_8 + 0x3e0) != 0 && *(rcx_8 + 0x3fa) != 0 && (rbp_1 == 0 || rbp_1 != r8))
            var_58 = nullptr
            var_50.d = 0
            sub_140e24dc0(rbp_1, &var_58)
            int64_t* rax_12
            
            if (var_50.d == 0)
                rax_12 = var_58
            label_140ed033f:
                
                if (rax_12 != 0)
                    sub_140a74f90(rax_12)
            else
                int64_t* rcx_10 = var_58
                
                if (rcx_10 != 0)
                    (*(*rcx_10 + 0x38))(rcx_10, 0)
                    rax_12 = var_58
                    
                    if (rax_12 != 0)
                        rax_12 = sub_140a84c80(rax_12, 0, 0)
                        var_58 = rax_12
                    
                    var_50.d = 0
                    goto label_140ed033f
            sub_140e21770(rbp_1)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp4_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp6_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp7_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rsi + 8))(rsi, 1)
        
        rbp = arg3
        i_2 += 1
        r15_1 += 0x10
    while (i_2 s< arg1[0x10].d)

sub_140ebd660()
int64_t r8_1
r8_1.b = 1
sub_140ede260(data_143e2a070, arg2)
jump(*(*arg1 + 0x50))
