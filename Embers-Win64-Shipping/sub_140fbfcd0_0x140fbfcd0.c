// 函数: sub_140fbfcd0
// 地址: 0x140fbfcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t* rbx = *(arg1 + 0x4c0)
void* r12 = nullptr
int64_t* rsi = nullptr

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rsi = *(arg1 + 0x4b8)

if (rsi != 0)
    r12 = &rsi[-0x9d]

void* var_200 = r12
int64_t* rdi = rbx

if (rbx != 0)
    rbx[1].d += 1
    rdi = rbx
    r12 = var_200

if (rdi != 0)
    rdi[1].d += 1

sub_140f9a690(&var_200)
void* rax_3 = arg4
int64_t* r15 = *(rax_3 + 0x48)

if (r15 != 0)
    r15[1].d += 1

uint64_t rcx_1
rcx_1.b = *(rax_3 + 0x38) == data_143e1e008
char var_208 = rcx_1.b

if (r15 != 0)
    r15[1].d -= 1
    
    if (r15[1].d == 1)
        (**r15)(r15)
        int32_t temp1_1 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*r15 + 8))(r15, 1)
        
        rcx_1 = zx.q(var_208)
        rax_3 = arg4

if (rcx_1.b == 0)
    int64_t* r15_3 = *(rax_3 + 0x48)
    int64_t rcx_37 = *(rax_3 + 0x38)
    
    if (r15_3 != 0)
        r15_3[1].d += 1
    
    char rax_46
    
    if (rcx_37 == data_143e1e020)
        rax_46 = sub_140f7b490(r12)
    
    if (rcx_37 != data_143e1e020 || rax_46 != 0)
        r12.b = 0
    else
        r12.b = 1
    
    if (r15_3 != 0)
        r15_3[1].d -= 1
        
        if (r15_3[1].d == 1)
            (**r15_3)(r15_3)
            int32_t temp5_1 = *(r15_3 + 0xc)
            *(r15_3 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*r15_3 + 8))(r15_3, 1)
    
    if (r12.b == 0)
        goto label_140fc01fa
    
    if ((*(*(arg1 - 8) + 0x70))(arg1 - 8) - 1 u> 2)
        goto label_140fc01fa
    
    void** rax_53 = (*(*rsi + 0x48))(rsi, arg1 - 8)
    
    if (rax_53 == 0)
        goto label_140fc01fa
    
    if ((*(*rsi + 0x10))(rsi, rax_53) == 0)
        (*(*rsi + 0x30))(rsi)
        var_200 = *rax_53
        void* rax_58 = rax_53[1]
        void* var_1f8_3 = rax_58
        
        if (rax_58 != 0)
            *(rax_58 + 8) += 1
        
        int64_t r9_1
        r9_1.b = 1
        (*(*rsi + 0x28))(rsi, &var_200, 1, r9_1, var_208)
        (*(*rsi + 0x40))(rsi, 2)
    
    var_200 = *rax_53
    void* rax_62 = rax_53[1]
    void* var_1f8_4 = rax_62
    
    if (rax_62 != 0)
        *(rax_62 + 8) += 1
    
    (*(*rsi + 0xa0))(rsi, &var_200, arg4)
    sub_140e194c0(arg2)
label_140fc0410:
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp11_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp12_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    char var_1d8 = 0
    int64_t var_1d0_1 = 0
    int64_t var_1c8_1 = 0
    char var_1b8_1 = 0
    int64_t var_1b0
    __builtin_memset(&var_1b0, 0, 0x88)
    int32_t var_124
    int32_t var_124_1 = (var_124 & 0xffffff01) | 1
    int32_t var_128_1 = 0x20702
    void var_108
    sub_140596b00(&var_108, &var_1d8)
    sub_140597700(&var_1d8)
    
    if (*(arg1 + 0x568) != 0)
        var_1d8 = 1
        int64_t var_1d0_2 = 0
        int64_t var_1c8_2 = 0
        char var_1b8_2 = 0
        var_124_1 = (var_124_1 & 0xffffff01) | 1
        int64_t var_1b0_1
        __builtin_memset(&var_1b0_1, 0, 0x88)
        int32_t var_128_2 = 0x20702
        sub_140e54f20(&var_108, &var_1d8)
        sub_140597700(&var_1d8)
    
    float zmm4_1 = *arg3
    float zmm5_1 = arg3[1]
    int64_t* var_1f8
    var_1f8.d = zmm4_1 * arg3[7]
    float var_1f0_1 = zmm5_1 * arg3[9]
    var_200.d = arg3[0xb]
    var_200:4.d = arg3[0xc]
    var_1f8:4.d = zmm4_1 * arg3[8]
    float var_1ec_1 = zmm5_1 * arg3[0xa]
    char rax_13
    int512_t zmm1_1
    rax_13, zmm1_1 = sub_140db3460(&var_200, arg4 + 0x18)
    
    if (sub_140e19840(arg1, zmm1_1) != 0)
        if (rax_13 != 0 && *(arg1 + 0x569) == 0)
            int32_t rax_16 = (*(*(arg1 - 8) + 0x70))(arg1 - 8)
            
            if (rax_16 == 2)
                if (*(arg1 + 0x568) != 0)
                    goto label_140fc0047
                
                (*(*rsi + 0x30))(rsi)
            label_140fc0039:
                (*(*rsi + 0x40))(rsi, 2)
            label_140fc0047:
                var_1d8 = 1
                int64_t var_1d0_3 = 0
                int64_t var_1c8_3 = 0
                char var_1b8_3 = 0
                int64_t var_1b0_2
                __builtin_memset(&var_1b0_2, 0, 0x88)
                var_124_1 = (var_124_1 & 0xffffff01) | 1
                int32_t var_128_3 = 0x20702
                sub_140e54f20(&var_108, &var_1d8)
                sub_140597700(&var_1d8)
            else if (rax_16 == 3 && *(arg1 + 0x568) == 0)
                char rax_17 = (*(arg4 + 8)).b
                
                if ((rax_17 & 0xc) == 0 && (rax_17 & 3) == 0)
                    int64_t* rax_19 = (*(*rsi + 0x48))(rsi, arg1 - 8)
                    
                    if (rax_19 != 0 && (*(*rsi + 0x10))(rsi, rax_19) != 0
                            && (*(*rsi + 0x70))(rsi) s> 1)
                        (*(*rsi + 0x30))(rsi)
                        var_200 = *rax_19
                        void* rax_26 = rax_19[1]
                        void* var_1f8_1 = rax_26
                        
                        if (rax_26 != 0)
                            *(rax_26 + 8) += 1
                        
                        int64_t r9
                        r9.b = 1
                        (*(*rsi + 0x28))(rsi, &var_200, 1, r9, var_208)
                        goto label_140fc0039
        
        int64_t* rax_34 = (*(*rsi + 0x48))(rsi, arg1 - 8)
        
        if (rax_34 != 0)
            var_200 = *rax_34
            void* rax_36 = rax_34[1]
            void* var_1f8_2 = rax_36
            
            if (rax_36 != 0)
                *(rax_36 + 8) += 1
            
            if ((*(*rsi + 0xa8))(rsi, &var_200) != 0)
                var_1d8 = 1
                int64_t var_1d0_4 = 0
                int64_t var_1c8_4 = 0
                char var_1b8_4 = 0
                int32_t var_124_2 = (var_124_1 & 0xffffff01) | 1
                int64_t var_1b0_3
                __builtin_memset(&var_1b0_3, 0, 0x88)
                int32_t var_128_4 = 0x20702
                sub_140e54f20(&var_108, &var_1d8)
                sub_140597700(&var_1d8)
        
        if (*(arg1 + 0x568) != 0 && *(arg1 + 0x569) == 0 && *(arg1 + 0x4d0) == 0)
            (*(*rsi + 0x40))(rsi, 2)
        
        sub_140e51550(arg2, &var_108)
        sub_140597700(&var_108)
        goto label_140fc0410
    
    sub_140597700(&var_108)
label_140fc01fa:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp7_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            int64_t rdx_11 = *rbx
            (*rdx_11)(rbx, rdx_11)
            int32_t temp8_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp8_1 == 1)
                int64_t r8 = *rbx
                (*(r8 + 8))(rbx, 1, r8)

__security_check_cookie(rax_1 ^ &var_228)
return arg2
