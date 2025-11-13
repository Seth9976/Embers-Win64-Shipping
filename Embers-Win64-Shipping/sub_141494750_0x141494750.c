// 函数: sub_141494750
// 地址: 0x141494750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
char rax_2 = (*(arg1 + 0x570)).b
void* rdx = *(arg1 + 0x10)
int64_t* r14 = arg4
int64_t r12 = *(arg1 + 0x18)
void* r13 = arg3
void* var_390 = arg3
int32_t r15 = *(rdx + 0x1548)

if ((rax_2 & 0x40) != 0 && *(arg1 + 0x534) s>= 0 && (rax_2 & 0x10) != 0)
    int64_t* rcx = data_143f0f180
    (*(*rcx + 0x100))(rcx, *(rdx + 0x10), *(rdx + 0x15b0))
    
    if (*(arg1 + 0x48) != 0)
        int32_t r11_1 = (data_1439b6c78).d
        void* r10_1 = &data_1439b6c60
        int32_t rcx_1 = 0
        int32_t var_3ac_1 = 1
        int32_t r8_1 = 0
        int32_t var_3b0_1 = 0
        void* var_3a8_1 = &data_1439b6c60
        int32_t var_3a0_1 = 0xffffffff
        int64_t var_39c_1 = 0
        
        if (r11_1 != 0)
            void* rax_4 = data_1439b6c70
            
            if (rax_4 != 0)
                r10_1 = rax_4
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r10_1
            
            if (rdx_4 != 0)
            label_141494878:
                int32_t rax_11 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_3ac_2 = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                int32_t rax_13 = r8_1 - rax_12 + 0x1f
                var_39c_1.d = rax_13
                
                if (rax_13 s> r11_1)
                    var_39c_1.d = r11_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_39c_1:4.d = r8_1
                    var_3b0_1 = rcx_1
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r10_1 + (rdx_5 << 2) + 4)
                    int32_t var_3a0_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_141494878
                
                var_39c_1.d = r11_1
        
        int128_t var_2f0_1 = 0xffffffff
        int128_t var_300_1 = var_3b0_1.o
        var_39c_1.d = r11_1
        int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_378 = (&data_1439b6c50).o
        int128_t var_2f8
        int128_t var_368_1 = var_2f8
        int64_t var_358_1 = temp0_3
        
        while (true)
            int64_t rcx_5 = sx.q(var_368_1:0xc.d)
            int64_t* rax_14 = var_378.q
            
            if (rcx_5.d == ((0xffffffff << (r11_1.b & 0x1f)).q u>> 0x20).d
                    && var_368_1.q == &data_1439b6c60 && rax_14 == &data_1439b6c50)
                break
            
            r8_1.b = 1
            int64_t* rcx_7 = *(*rax_14 + rcx_5 * 0x10)
            (*(*rcx_7 + 0x10))(rcx_7, *(arg1 + 0x48), r8_1)
            var_368_1:8.d &= not.d(var_378:0xc.d)
            sub_14059bdd0(&var_378:8)
        
        r14 = arg4
        r13 = var_390

int128_t var_2d8

if (r15 s< 3)
    void* r8_2 = *(arg1 + 0x10)
    __builtin_memset(&var_2d8, 0, 0x60)
    int128_t var_1f8_1 = data_142d3f660
    arg5 = sub_1414a24f0(arg1, arg2, r8_2, &var_2d8)
    int64_t* rcx_10 = data_143f0f180
    (*(*rcx_10 + 0x100))(rcx_10, *(*(r13 + 8) + 0xe0), &var_2d8)
    int64_t* rcx_11 = data_143f0f180
    (*(*rcx_11 + 0x100))(rcx_11, *(arg1 + 0x20), &var_2d8)
    r12 = *(*(r13 + 8) + 0xe0)

int32_t var_338 = 0x11
int64_t var_330 = *(*(arg1 + 0x10) + 0x10)
int32_t rcx_13 = *(arg1 + 0x570)
int128_t var_328 = zx.o(0)
int64_t var_318 = r12
int64_t rax_25

if (((rcx_13 u>> 7).b & 1) != 0)
    rax_25 = data_14395da00

if (((rcx_13 u>> 7).b & 1) == 0 || ((rcx_13 u>> 5).b & 1) != 0)
    rax_25 = data_1439b59c0

int64_t var_348 = rax_25
int64_t var_340 = data_1439b6e58
int32_t var_310 = 0
sub_14149e7e0(arg1, arg2)

if (*(arg1 + 0x40) != 0)
    goto label_141494a93

char var_3b8

if (arg6 != 0)
    int64_t rcx_17 = r14[1]
    var_3b8 = 0
    (*r14)(rcx_17, arg2, &var_3b8)

arg5 = sub_141483730(arg1, arg2, &var_348, r13, *(arg1 + 0x10))
uint64_t result

if (arg6 == 0)
    result = sub_141267530(arg1 + 0x680, nullptr, arg2)
else
    sub_141096650(arg2)
label_141494a93:
    
    if (arg6 == 0)
        result = sub_141267530(arg1 + 0x680, nullptr, arg2)
    else
        char rcx_16
        
        if (*(data_143ed9340 + 4) s> 0 || *(data_143f02a68 + 4) s> 0)
            rcx_16 = 1
        else
            rcx_16 = 0
        
        int64_t rdi_4 = *r14
        var_390 = &data_143f02b98
        char var_388_1 = rcx_16
        void* r14_1
        
        if (rdi_4 == 0)
            r14_1 = var_390
        else
            r14_1 = r14[1]
        
        int64_t rax_30
        rax_30.b = *(data_143ed9328 + 4) s> 0
        sub_141411200(&var_2d8, zx.q(var_3b8), *(arg1 + 0x10), r13, arg2, rax_30.b, rcx_16 ^ 1, 
            &var_348)
        void* var_210
        void* rax_31 = var_210
        var_2d8.q = &data_142f8db48
        void* var_220_1 = arg1
        
        if (rdi_4 != 0)
            rax_31 = r14_1
        
        int64_t var_218_1 = rdi_4
        void* var_210_1 = rax_31
        char var_260_1 = 0
        int128_t zmm2_1 = sub_141267530(arg1 + 0x680, &var_2d8, arg2)
        var_2d8.q = &data_142f8db48
        sub_14141cd40(&var_2d8, 0, zmm2_1, arg5)
        sub_141412cc0(&var_2d8)
        result = sub_141962ac0(&var_390)

__security_check_cookie(rax_1 ^ &var_3f8)
return result
