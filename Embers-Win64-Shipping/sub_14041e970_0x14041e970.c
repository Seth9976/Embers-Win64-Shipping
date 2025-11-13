// 函数: sub_14041e970
// 地址: 0x14041e970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int16_t* var_2a8 = nullptr
int32_t var_2a0 = 0
sub_1405947f0(&var_2a8, 4)
int32_t rax = var_2a0 + 4

if (rax s> 0)
    sub_140594770(&var_2a8)

sub_1405a7220(var_2a8, 4, "red", 4, 0x3f)
int16_t* var_2b8 = nullptr
int32_t var_2b0 = 0
sub_1405947f0(&var_2b8, 4)
int32_t rax_1 = var_2b0 + 4

if (rax_1 s> 0)
    sub_140594770(&var_2b8)

sub_1405a7220(var_2b8, 4, "red", 4, 0x3f)
int16_t* var_2c8 = nullptr
int32_t var_2c0 = 0
sub_1405947f0(&var_2c8, 0xc)
int32_t rax_2 = var_2c0 + 0xc

if (rax_2 s> 0)
    sub_140594770(&var_2c8)

sub_1405a7220(var_2c8, 0xc, "transparent", 0xc, 0x3f)
void* r15 = &data_143cdd268
void* r13

if (data_143cdd238 == data_143cdd264)
label_14041eb4d:
    r13 = nullptr
else
    int32_t rcx_9
    int16_t* rdx_3
    
    if (rax == 0)
        rdx_3 = &data_142d40450
        rcx_9 = 0
    else
        rdx_3 = var_2a8
        rcx_9 = rax - 1
    
    int32_t rax_5 = sub_1405969c0(rcx_9, rdx_3)
    void* rcx_10 = data_143cdd270
    void* rax_7 = &data_143cdd268
    
    if (rcx_10 != 0)
        rax_7 = rcx_10
    
    int32_t rbx_1 = *(rax_7 + (((sx.q(data_143cdd278) - 1) & sx.q(rax_5)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_14041eb4d_1:
        r13 = nullptr
    else
        int64_t rcx_11 = data_143cdd230
        int64_t rdi_2
        
        while (true)
            int16_t* rdx_7 = &data_142d40450
            rdi_2 = sx.q(rbx_1) * 0xa0
            
            if (rax != 0)
                rdx_7 = var_2a8
            
            int16_t* const rcx_12
            
            if (*(rdi_2 + rcx_11 + 8) == 0)
                rcx_12 = &data_142d40450
            else
                rcx_12 = *(rdi_2 + rcx_11)
            
            if (sub_140a54510(rcx_12, rdx_7) == 0)
                break
            
            rcx_11 = data_143cdd230
            rbx_1 = *(rdi_2 + rcx_11 + 0x98)
            
            if (rbx_1 == 0xffffffff)
                goto label_14041eb4d_2
        
        if (rbx_1 == 0xffffffff)
        label_14041eb4d_2:
            r13 = nullptr
        else
            r13 = data_143cdd230 + rdi_2

void* r14

if (data_143cdd238 == data_143cdd264)
label_14041ec0d:
    r14 = nullptr
else
    int32_t rcx_13
    int16_t* rdx_8
    
    if (rax_1 == 0)
        rdx_8 = &data_142d40450
        rcx_13 = 0
    else
        rdx_8 = var_2b8
        rcx_13 = rax_1 - 1
    
    int32_t rax_12 = sub_1405969c0(rcx_13, rdx_8)
    void* rcx_14 = data_143cdd270
    void* rax_14 = &data_143cdd268
    
    if (rcx_14 != 0)
        rax_14 = rcx_14
    
    int32_t rbx_2 = *(rax_14 + (((sx.q(data_143cdd278) - 1) & sx.q(rax_12)) << 2))
    
    if (rbx_2 == 0xffffffff)
    label_14041ec0d_1:
        r14 = nullptr
    else
        int64_t rcx_15 = data_143cdd230
        int64_t rdi_4
        
        while (true)
            int16_t* rdx_12 = &data_142d40450
            rdi_4 = sx.q(rbx_2) * 0xa0
            
            if (rax_1 != 0)
                rdx_12 = var_2b8
            
            int16_t* const rcx_16
            
            if (*(rdi_4 + rcx_15 + 8) == 0)
                rcx_16 = &data_142d40450
            else
                rcx_16 = *(rdi_4 + rcx_15)
            
            if (sub_140a54510(rcx_16, rdx_12) == 0)
                break
            
            rcx_15 = data_143cdd230
            rbx_2 = *(rdi_4 + rcx_15 + 0x98)
            
            if (rbx_2 == 0xffffffff)
                goto label_14041ec0d_2
        
        if (rbx_2 == 0xffffffff)
        label_14041ec0d_2:
            r14 = nullptr
        else
            r14 = data_143cdd230 + rdi_4

if (data_143cdd238 != data_143cdd264)
    int32_t rcx_17
    int16_t* rdx_13
    
    if (rax_2 == 0)
        rdx_13 = &data_142d40450
        rcx_17 = 0
    else
        rdx_13 = var_2c8
        rcx_17 = rax_2 - 1
    
    int32_t rax_19 = sub_1405969c0(rcx_17, rdx_13)
    void* rcx_18 = data_143cdd270
    
    if (rcx_18 != 0)
        r15 = rcx_18
    
    int32_t i = *(r15 + (((sx.q(data_143cdd278) - 1) & sx.q(rax_19)) << 2))
    
    if (i != 0xffffffff)
        int64_t rcx_19 = data_143cdd230
        
        do
            int16_t* rdx_17 = &data_142d40450
            int64_t rdi_6 = sx.q(i) * 0xa0
            
            if (rax_2 != 0)
                rdx_17 = var_2c8
            
            int16_t* const rcx_20
            
            if (*(rdi_6 + rcx_19 + 8) == 0)
                rcx_20 = &data_142d40450
            else
                rcx_20 = *(rdi_6 + rcx_19)
            
            if (sub_140a54510(rcx_20, rdx_17) == 0)
                if (i != 0xffffffff)
                    rsi = data_143cdd230 + rdi_6
                
                break
            
            rcx_19 = data_143cdd230
            i = *(rdi_6 + rcx_19 + 0x98)
        while (i != 0xffffffff)

void** var_298
void*** rax_23 = sub_140dd6180(&var_298)
sub_140693270(&rax_23[1], rsi + 0x10)
sub_140693270(&rax_23[0x12], r14 + 0x10)
sub_140693270(&rax_23[0x23], r13 + 0x10)
sub_14068def0(&data_143cdd280, rax_23)
var_298 = &data_142d8ad20
void** var_f8
sub_140691a20(&var_f8)
void** var_180
sub_140691a20(&var_180)
void** var_208
sub_140691a20(&var_208)
void** var_290
sub_140691a20(&var_290)
int16_t* rcx_29 = var_2c8
var_298 = &data_142d8ad00

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int16_t* rcx_30 = var_2b8

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

int16_t* rcx_31 = var_2a8

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

return atexit(sub_142cb1470) __tailcall
