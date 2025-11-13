// 函数: sub_140b8aee0
// 地址: 0x140b8aee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)
void* r13 = arg1

if (rdx == 0)
    void var_50
    int64_t* rax_1 = _vfprintf_p_l(&var_50, u"No project is currently loaded", u"ProjectManager")
    int64_t rdx_1 = *arg4
    *arg4 = *rax_1
    *rax_1 = rdx_1
    int64_t rdx_2 = arg4[1]
    arg4[1] = rax_1[1]
    rax_1[1] = rdx_2
    arg4[2].d = rax_1[2].d
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rdi_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_48 + 8))(var_48, zx.q(rdi_1))
    
    int32_t rax_2
    rax_2.b = 0
    return rax_2

int64_t* r15 = nullptr
uint64_t rdi_2 = 0
int32_t var_134 = 0

if (*(rdx + 0x50) == 0)
label_140b8b027:
    void var_f8
    sub_140596d10(&var_f8, arg2)
    void* rbx_3 = *(r13 + 8)
    char var_e8_1 = arg3
    char var_e7_1 = 0
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x90)
    rdi_2 = sx.q(*(rbx_3 + 0x50))
    int32_t rax_8 = (rdi_2 + 1).d
    var_134 = rdi_2.d
    *(rbx_3 + 0x50) = rax_8
    
    if (rax_8 s> *(rbx_3 + 0x54))
        sub_1405e3f90(rbx_3 + 0x48)
    
    sub_140b77ee0(rdi_2 * 0xa8 + *(rbx_3 + 0x48), &var_f8)
    sub_140b78c70(&var_f8)
else
    int64_t rbx_2 = 0
    
    while (true)
        int64_t* rax_6 = *(rdx + 0x48)
        int16_t* rdx_4
        
        if (arg2[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *arg2
        
        int16_t* const rcx_5
        
        if (*(rax_6 + rbx_2 + 8) == 0)
            rcx_5 = &data_142d40450
        else
            rcx_5 = *(rax_6 + rbx_2)
        
        int32_t rax_7 = sub_140a54510(rcx_5, rdx_4)
        rdx = *(r13 + 8)
        
        if (rax_7 == 0)
            *(sx.q(rdi_2.d) * 0xa8 + *(rdx + 0x48) + 0x10) = arg3
            break
        
        rdi_2 = zx.q(rdi_2.d + 1)
        rbx_2 += 0xa8
        var_134 = rdi_2.d
        
        if (rdi_2.d == *(rdx + 0x50))
            goto label_140b8b027

void* rcx_16 = *(r13 + 8)
int64_t r14 = sx.q(rdi_2.d)
uint64_t rbx_5 = zx.q(*(rcx_16 + 0x50) - 1)
int64_t rsi_1 = sx.q(rbx_5.d)

if (rsi_1 s> r14)
    int64_t rdi_3 = rsi_1 * 0xa8
    int64_t i_3 = rsi_1 - r14
    int64_t i
    
    do
        int64_t* rcx_11 = *(*(r13 + 8) + 0x48)
        int16_t* rdx_8
        
        if (arg2[1].d == 0)
            rdx_8 = &data_142d40450
        else
            rdx_8 = *arg2
        
        int16_t* const rcx_13
        
        if (*(rcx_11 + rdi_3 + 8) == 0)
            rcx_13 = &data_142d40450
        else
            rcx_13 = *(rcx_11 + rdi_3)
        
        int32_t rax_11 = sub_140a54510(rcx_13, rdx_8)
        
        if (rax_11 == 0)
            sub_140b892d0(*(r13 + 8) + 0x48, rbx_5.d, rax_11 + 1, 1)
        
        rbx_5 = zx.q(rbx_5.d - 1)
        rdi_3 -= 0xa8
        i = i_3
        i_3 -= 1
    while (i != 1)
    rcx_16 = *(r13 + 8)

void* rdi_5 = r14 * 0xa8 + *(rcx_16 + 0x48)
TEB* gsbase
int32_t* rsi_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e19fb0 s> *rsi_3)
    _Init_thread_header(&data_143e19fb0)
    
    if (data_143e19fb0 == 0xffffffff)
        sub_140b77ce0(&data_143e19eb0)
        atexit(&data_142cc0e50)
        _Init_thread_footer(&data_143e19fb0)

int64_t* var_108
(*(data_143e19eb0 + 0x38))(&data_143e19eb0, &var_108, arg2)
int64_t* rcx_18 = var_108

if (rcx_18 != 0)
    uint64_t rax_17 = (*(*rcx_18 + 0x60))(rcx_18)
    sub_140597df0(rdi_5 + 0x28, rax_17 + 0x78)
    sub_140597970(rdi_5 + 0x98, rax_17 + 0xa8)
    rcx_18 = var_108

int64_t* rax_15

if (*(rdi_5 + 0x40) == 0 && *(rdi_5 + 0x50) == 0)
    if (rcx_18 != 0)
        rax_15 = (*(*rcx_18 + 0x60))()
    
    if (rcx_18 == 0 || *(rax_15 + 0xfc) == 0)
        int32_t i_5 = 0
        int64_t* var_130 = nullptr
        int32_t r13_1 = 0
        int32_t var_124_1 = 0
        rbx_5.b = *(*(arg1 + 8) + 0x111) == 0
        char var_138_1 = rbx_5.b
        
        if (data_143e19fb0 s> *rsi_3)
            _Init_thread_header(&data_143e19fb0)
            
            if (data_143e19fb0 == 0xffffffff)
                sub_140b77ce0(&data_143e19eb0)
                atexit(&data_142cc0e50)
                _Init_thread_footer(&data_143e19fb0)
        
        int64_t* var_120
        (*(data_143e19eb0 + 0x50))(&data_143e19eb0, &var_120)
        int64_t* r14_1 = var_120
        int32_t i_6
        int32_t i_4 = i_6
        rax_15 = &r14_1[sx.q(i_4) * 2]
        
        if (r14_1 != rax_15)
            do
                int64_t* rcx_21 = *r14_1
                
                if ((*(*rcx_21 + 0x40))(rcx_21, zx.q(rbx_5.b)).b != 0)
                    int64_t* rcx_22 = *r14_1
                    
                    if (*((*(*rcx_22 + 0x60))(rcx_22) + 0xfc) == 0)
                        int64_t* rcx_23 = *r14_1
                        int16_t** rax_28 = (*(*rcx_23 + 8))(rcx_23)
                        int64_t* rbx_6 = r15
                        void* rsi_6 = &r15[sx.q(i_5) * 2]
                        
                        if (r15 != rsi_6)
                            while (true)
                                int16_t* rdx_16
                                
                                if (rax_28[1].d == 0)
                                    rdx_16 = &data_142d40450
                                else
                                    rdx_16 = *rax_28
                                
                                int16_t* const rcx_24
                                
                                if (rbx_6[1].d == 0)
                                    rcx_24 = &data_142d40450
                                else
                                    rcx_24 = *rbx_6
                                
                                if (sub_140a54510(rcx_24, rdx_16).d == 0)
                                    break
                                
                                rbx_6 = &rbx_6[2]
                                
                                if (rbx_6 == rsi_6)
                                    goto label_140b8b314
                        
                        if (r15 == rsi_6 || ((rbx_6 - r15) s>> 4).d == 0xffffffff)
                        label_140b8b314:
                            int64_t i_7 = sx.q(i_5)
                            i_5 = (i_7 + 1).d
                            
                            if (i_5 s> r13_1)
                                sub_1405a4f90(&var_130)
                                r13_1 = var_124_1
                                r15 = var_130
                            
                            sub_140596d10(&r15[i_7 * 2], rax_28)
                        
                        rbx_5 = zx.q(var_138_1)
                
                r14_1 = &r14_1[2]
            while (r14_1 != rax_15)
            
            i_4 = i_6
            r14_1 = var_120
        
        if (i_4 != 0)
            void* rdi_7 = &r14_1[1]
            int32_t i_1
            
            do
                int64_t* rbx_9 = *rdi_7
                
                if (rbx_9 != 0)
                    rbx_9[1].d -= 1
                    
                    if (rbx_9[1].d == 1)
                        (**rbx_9)(rbx_9)
                        int32_t temp7_1 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_9 + 8))(rbx_9, 1)
                
                rdi_7 += 0x10
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            r14_1 = var_120
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int64_t* rbx_10 = r15
        void* rdi_10 = &r15[sx.q(i_5) * 2]
        
        if (r15 == rdi_10)
        label_140b8b40d:
            rax_15.b = 0
        else
            while (true)
                int16_t* rdx_19
                
                if (arg2[1].d == 0)
                    rdx_19 = &data_142d40450
                else
                    rdx_19 = *arg2
                
                int16_t* const rcx_32
                
                if (rbx_10[1].d == 0)
                    rcx_32 = &data_142d40450
                else
                    rcx_32 = *rbx_10
                
                if (sub_140a54510(rcx_32, rdx_19).d == 0)
                    rax_15.b = 1
                    break
                
                rbx_10 = &rbx_10[2]
                
                if (rbx_10 == rdi_10)
                    goto label_140b8b40d
        
        r13 = arg1
        
        if (rax_15.b == arg3)
            sub_140b892d0(*(r13 + 8) + 0x48, var_134, 1, 1)
        
        int64_t* rbx_11 = r15
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                int64_t rcx_35 = *rbx_11
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                rbx_11 = &rbx_11[2]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (r15 != 0)
            sub_140a74f90(r15)

*(r13 + 0x28) = 1
int64_t* var_100

if (var_100 != 0)
    var_100[1].d -= 1
    
    if (var_100[1].d == 1)
        (**var_100)(var_100)
        int32_t temp3_1 = *(var_100 + 0xc)
        *(var_100 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_100 + 8))(var_100, 1)

rax_15.b = 1
return rax_15
