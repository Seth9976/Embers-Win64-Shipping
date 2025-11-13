// 函数: sub_140e86d00
// 地址: 0x140e86d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t rdi
int64_t var_28 = rdi
char r15 = 0
int32_t var_278 = 0
arg1[0xb0].d += 1
void* var_238
sub_140e683e0(arg1, &var_238, *(arg4 + 0xc))
sub_140e8d2e0(var_238, arg4[0xa].d, &arg4[3])
int64_t var_248
(*(*arg1 + 0x88))(arg1, &var_248)
var_278 = 0
void* var_270 = arg3
var_278.o = var_278.o
void var_288
void* var_298 = &var_288
void** var_228
sub_140e4f400(arg2, arg1, &var_278, sub_140e51390(&var_228, arg4))
int128_t var_258
void var_1b8

if (*arg2 == 0)
    void* var_270_1 = arg3
    var_278 = *(arg3 + 0x130) - 1
    var_258 = var_278.o
    var_278.q = arg1
    var_298 = &var_278
    sub_1405979f0(arg2, 
        sub_140e4ccf0(&var_1b8, arg1, &var_258, sub_140e51390(&var_228, arg4), var_298))
    sub_140597700(&var_1b8)
    
    if (*(arg4 + 0x5c) != 0 && arg1[0x87].b == 0 && *(arg1 + 0x439) == 0)
        int32_t rax_8 = *(arg3 + 0x130)
        int64_t rbx_1 = sx.q(rax_8 - 1)
        
        if (rax_8 - 1 s>= 0)
            rdi = rbx_1 * 0x48
            int64_t temp5_1
            
            do
                void* rax_10 = *(arg3 + 0x128)
                void* rdx_8 = arg3 + 8
                
                if (rax_10 != 0)
                    rdx_8 = rax_10
                
                void* rdx_9 = rdx_8 + rdi
                int64_t* rcx_8 = *(rdx_9 + 0x38)
                (*(*rcx_8 + 0x78))(rcx_8, rdx_9, arg4)
                rdi -= 0x48
                temp5_1 = rbx_1
                rbx_1 -= 1
            while (temp5_1 - 1 s>= 0)
            r15 = 0

int64_t rcx_10 = *(*(*arg1 + 0x88))(arg1, &var_258)
rdi.b = var_248 != rcx_10
int64_t* var_250

if (var_250 != 0)
    var_250[1].d -= 1
    
    if (var_250[1].d == 1)
        (**var_250)(var_250)
        int32_t temp1_1 = *(var_250 + 0xc)
        *(var_250 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_250 + 8))(var_250, 1)

int64_t* rbx_3

if (rdi.b != 0)
    rbx_3 = arg4
    rdi.b = 0
else
    rbx_3 = *(arg2 + 0x50)
    
    if (rbx_3 != 0)
        int32_t rax_16 = rbx_3[1].d
        
        if (rax_16 == 0)
            rbx_3 = nullptr
        else
            rbx_3[1].d = rax_16 + 1
    
    int64_t rax_18 = 0
    
    if (rbx_3 != 0)
        rax_18 = *(arg2 + 0x48)
    
    r15 = 1
    
    if (rax_18 != 0)
        rdi.b = 0
    else
        rdi = 1

if ((r15 & 1) != 0 && rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp7_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

if (rdi.b != 0)
    int32_t rax_21 = *(arg3 + 0x130)
    int64_t rdi_2 = sx.q(rax_21 - 1)
    
    if (rax_21 - 1 s>= 0)
        int64_t r14_2 = rdi_2 * 0x48
        int64_t temp11_1
        
        do
            void* rax_23 = *(arg3 + 0x128)
            void* rbx_4 = arg3 + 8
            
            if (rax_23 != 0)
                rbx_4 = rax_23
            
            int64_t* rcx_15 = *(rbx_4 + r14_2 + 0x38)
            
            if ((*(*rcx_15 + 0x198))(rcx_15) != 0)
                var_278.q = *(rbx_4 + r14_2 + 0x38)
                void* rax_27 = *(rbx_4 + r14_2 + 0x40)
                void* var_270_2 = rax_27
                
                if (rax_27 != 0)
                    *(rax_27 + 8) += 1
                
                sub_140da8ef0(arg3, &var_1b8, &var_278)
                (*(*arg1 + 0x140))(arg1, zx.q(*(arg4 + 0xc)), &var_1b8, 0, var_298)
                void var_68
                sub_140596d80(&var_68)
                int64_t* var_70
                
                if (var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d == 1)
                        (**var_70)(var_70)
                        int32_t temp13_1 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*var_70 + 8))(var_70, 1)
                
                void var_1b0
                sub_140d94d20(&var_1b0)
                break
            
            r14_2 -= 0x48
            temp11_1 = rdi_2
            rdi_2 -= 1
        while (temp11_1 - 1 s>= 0)

int64_t* var_240

if (var_240 != 0)
    var_240[1].d -= 1
    
    if (var_240[1].d == 1)
        (**var_240)(var_240)
        int32_t temp9_1 = *(var_240 + 0xc)
        *(var_240 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_240 + 8))(var_240, 1)

int64_t* var_230

if (var_230 != 0)
    var_230[1].d -= 1
    
    if (var_230[1].d == 1)
        (**var_230)(var_230)
        int32_t temp10_1 = *(var_230 + 0xc)
        *(var_230 + 0xc) -= 1
        
        if (temp10_1 == 1)
            int64_t r8_8 = *var_230
            (*(r8_8 + 8))(var_230, 1, r8_8)

arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
