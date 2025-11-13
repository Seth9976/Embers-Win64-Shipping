// 函数: sub_141427340
// 地址: 0x141427340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14198b7d0()
TEB* gsbase

if (data_143ed4ae8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ed4ae8)
    
    if (data_143ed4ae8 == 0xffffffff)
        int64_t* rcx_22 = data_143db18d0
        
        if (rcx_22 == 0)
            sub_140a53c40()
            rcx_22 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        data_143ed4ae0 = (*(*rcx_22 + 0xb0))(rcx_22, u"r.RHICmdAsyncRHIThreadDispatch", r8_4)
        _Init_thread_footer(&data_143ed4ae8)

int64_t* rcx_1 = data_143ed4ae0
int64_t r15

if ((*(*rcx_1 + 0x90))(rcx_1) == 0 || data_143f01c92 == 0 || *(data_143ed3478 + 4) == 0)
    r15.b = 0
else
    r15.b = 1

int64_t* rax_5 = j_sub_140a82f30(0x28)
int64_t* rbx = rax_5
void*** (* var_98)()

if (rax_5 == 0)
    rbx = nullptr
else
    char arg_10 = 0
    char* var_90_1 = &arg_10
    var_98 = j_sub_140597fc0
    int64_t* rax_7 = sub_140a756e0(&var_98, &data_143958018) + 0x10
    *rbx = rax_7
    rbx[1] = *rax_7
    rbx[2] = rax_7[2]
    rbx[3].b = 0
    rbx[4] = rax_7[3]
    rax_7[3] = rbx
    void* rax_8 = *rbx
    *(rax_8 + 0x20) += 1

if (r15.b != 0)
    arg2[0x78] = rbx
    rbx = nullptr

sub_1423cc240(arg1)
char rax_9 = data_1439c92c8

if ((arg2[7].d & 0x400) != 0)
    rax_9 = 1

data_1439c92c8 = rax_9
(*(*arg2 + 8))(arg2, arg1)
sub_140b33630("PostRenderCleanUp")
int32_t i = 0
int64_t rsi = 0

do
    uint64_t* rcx_10 = arg2[1] + 0x1a58 + rsi
    rcx_10[1].d = 0
    
    if (*(rcx_10 + 0xc) s<= 0xffffffff)
        sub_1405a5410(rcx_10, 0)
    
    i += 1
    rsi += 0x10
while (i u< 2)

int32_t r11 = (data_1439b6c78).d
void* r10 = &data_1439b6c60
var_98:4.d = 1
int32_t rcx_11 = 0
var_98.d = 0
void* var_90_2 = &data_1439b6c60
int32_t r8_2 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_11 = data_1439b6c70
    
    if (rax_11 != 0)
        r10 = rax_11
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r10
    
    if (rdx_4 != 0)
    label_141427545:
        int32_t rax_18 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
        var_98:4.d = rax_18
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_2
        
        int32_t rax_20 = r8_2 - rax_19 + 0x1f
        var_84.d = rax_20
        
        if (rax_20 s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_11)
            r8_2 += 0x20
            rcx_11 += 1
            var_84:4.d = r8_2
            var_98.d = rcx_11
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r10 + (rdx_5 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141427545
        
        var_84.d = r11

double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
var_84.d = r11
int96_t zmm1 = var_98.o:8.12
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_78 = (&data_1439b6c50).o
int96_t var_68 = zmm1
int64_t var_58 = temp0_3.q

while (true)
    int32_t var_5c
    int64_t rcx_15 = sx.q(var_5c)
    int64_t* rax_21 = var_78.q
    
    if (rcx_15.d == ((0xffffffff << (r11.b & 0x1f)).q u>> 0x20).d && var_68.q == &data_1439b6c60
            && rax_21 == &data_1439b6c50)
        data_1439c92c8 = 0
        
        if (r15.b == 0)
            r8_2.b = 1
            int128_t entry_zmm3
            sub_1414336b0(arg1, arg2, r8_2.b, entry_zmm3)
        else
            sub_14141c780(arg1, arg2)
        
        int64_t result = sub_140b37f60("PostRenderCleanUp")
        
        if (rbx == 0)
            return result
        
        if (rbx[3].b == 0)
            void* rax_26 = *rbx
            rbx[3].b = 1
            *(rax_26 + 0x20) -= 1
            int64_t* rcx_20 = *rbx
            int64_t rdx_7 = rbx[2]
            
            if (rdx_7 != rcx_20[2])
                sub_140b16b40(rcx_20, rdx_7)
                rcx_20 = *rbx
            
            *rcx_20 = rbx[1]
            *(*rbx + 0x18) = rbx[4]
            rbx[1] = 0
        
        return j_sub_140a74f90(rbx)
    
    int64_t* rcx_17 = *(*rax_21 + rcx_15 * 0x10)
    (*(*rcx_17 + 0x18))(rcx_17)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
