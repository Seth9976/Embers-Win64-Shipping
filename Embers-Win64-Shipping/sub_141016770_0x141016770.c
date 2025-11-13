// 函数: sub_141016770
// 地址: 0x141016770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f0f19c = 0
int64_t* rbx = *(arg1 + 0x4c0)
int64_t rdi = 0
uint64_t rsi_1 = sx.q(*(arg1 + 0x4c8)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x4c8))])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        sub_141064600(*rbx)
        sub_14106a370(*rbx)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != rsi_1)

sub_141014780(arg1)
int32_t rdi_1 = 1 << (data_1439c7a34).b
int32_t i_7 = rdi_1 - 1
int32_t i_10 = i_7

if (rdi_1 != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_7)
    int32_t rsi_2 = temp0_1
    int32_t arg_18 = rsi_2
    int32_t i
    
    do
        void* r14_1 = *(arg1 + (zx.q(rsi_2) << 3) + 0x9d8)
        int64_t* rbx_1 = *(r14_1 + 0xae0)
        
        if (rbx_1 != 0)
            int64_t* rcx_4 = rbx_1[1]
            
            if (rcx_4 != 0)
                (**rcx_4)(rcx_4, 1)
            
            int64_t* rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                (**rcx_5)(rcx_5, 1)
            
            j_sub_140a74f90(rbx_1)
        
        CRITICAL_SECTION* lpCriticalSection = *(r14_1 + 0xae8)
        *(r14_1 + 0xae0) = 0
        
        if (lpCriticalSection != 0)
            sub_141033f80(lpCriticalSection)
            int64_t* rcx_8 = lpCriticalSection->__offset(0xf8).q
            
            if (rcx_8 != 0)
                (*(*rcx_8 + 0x10))(rcx_8)
            
            int64_t* rcx_9 = lpCriticalSection->__offset(0x80).q
            
            if (rcx_9 != 0)
                (*(*rcx_9 + 0x10))(rcx_9)
            
            sub_140d94f50(&lpCriticalSection[1])
            DeleteCriticalSection(lpCriticalSection)
            j_sub_140a74f90(lpCriticalSection)
        
        *(r14_1 + 0xae8) = 0
        i = not.d(1 << rsi_2.b) & i_7
        i_7 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            rsi_2 = temp0_2
            int32_t arg_20 = rsi_2
        else
            rsi_2 = 0x20
    while (i != 0)

void* r15 = arg1 + 0x988
int32_t var_110 = 0xffffffff
int32_t r11 = *(r15 + 0x28)
void* r14_2 = r15 + 0x10
void* var_d0 = r15
int32_t var_11c = 1
int32_t rcx_14 = 0
int32_t var_120 = 0
int32_t r8 = 0
void* var_e0 = r14_2
void* var_118 = r14_2
int64_t var_10c = 0

if (r11 != 0)
    void* rax_9 = *(r14_2 + 0x10)
    void* r9_1 = r14_2
    
    if (rax_9 != 0)
        r9_1 = rax_9
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14101697b:
        int32_t rax_16 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_3
        int32_t temp0_3
        temp0_3, rflags_3 = _bit_scan_reverse(rax_16)
        int32_t var_11c_1 = rax_16
        int32_t var_100_1 = temp0_3
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_3
        
        var_10c.d = r8 - rax_17 + 0x1f
        
        if (r8 - rax_17 + 0x1f s> r11)
            var_10c.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_14)
            r8 += 0x20
            rcx_14 += 1
            var_10c:4.d = r8
            var_120 = rcx_14
            
            if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_110_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14101697b
        
        var_10c.d = r11

int32_t rdx_7 = *(r15 + 0x28)
char rcx_17 = rdx_7.b & 0x1f
double var_140[0x2] = var_120.o
int32_t r8_3 = rdx_7 s>> 5
int128_t var_130 = 0xffffffff
int32_t rsi_3 = 0xffffffff << rcx_17
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_a8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
void* var_148
var_148.d = r8_3
var_148:4.d = 1 << rcx_17
var_140[0] = r14_2
var_140[1].d = rsi_3
var_140[1]:4.d = rdx_7
var_130.d = r9_3
double var_c8[0x2] = r15.o

if (rdx_7 != r11)
    void* rax_20 = *(r14_2 + 0x10)
    void* r10_1 = r14_2
    
    if (rax_20 != 0)
        r10_1 = rax_20
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_3
    
    if (rdx_11 != 0)
    label_141016a7d:
        int32_t rax_27 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_4
        int32_t temp0_5
        temp0_5, rflags_4 = _bit_scan_reverse(rax_27)
        var_148:4.d = rax_27
        int32_t var_fc_1 = temp0_5
        int32_t rbx_2
        
        if (rax_27 == 0)
            rbx_2 = 0x20
        else
            rbx_2 = 0x1f - temp0_5
        
        var_140[1]:4.d = r9_3 - rbx_2 + 0x1f
        
        if (r9_3 - rbx_2 + 0x1f s> r11)
            var_140[1]:4.d = r11
    else
        while (true)
            int64_t rcx_19 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            var_130.d = r9_3
            var_148.d = r8_3
            
            if (rcx_19.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_19 << 2) + 4)
            var_140[1].d = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141016a7d
        
        var_140[1]:4.d = r11

double var_88[0x2] = var_140
double var_98[0x2] = var_148.o
double var_78[0x2] = r15.o
uint64_t rcx_22 = var_140[0] u>> 0x20
int64_t var_58 = (_mm_unpackhi_pd(var_140, var_140[0])).q
double var_68[0x2] = var_98
uint64_t var_d8 = rcx_22

while (true)
    int64_t rax_29 = sx.q(var_140[1]:4.d)
    int64_t* rdx_12 = var_c8[0]
    
    if (rax_29.d == rcx_22.d && var_140[0] == r14_2 && rdx_12 == r15)
        int64_t Handle = *(arg1 + 0x30)
        
        if (Handle != -1)
            RemoveVectoredExceptionHandler(Handle)
        
        sub_1419a2e50()
        data_143f10908 += 1
        int32_t i_1 = 0
        
        if (data_143f1afd0 s> 0)
            int64_t* rdi_6 = nullptr
            
            do
                int64_t* rcx_31 = *(rdi_6 + data_143f1afc8)
                
                if (rcx_31 != 0)
                    (*(*rcx_31 + 0x20))(rcx_31)
                
                i_1 += 1
                rdi_6 = &rdi_6[1]
            while (i_1 s< data_143f1afd0)
        
        data_143f10908 -= 1
        sub_1419a2e50()
        data_143f10908 += 1
        int32_t i_2 = 0
        
        if (data_143f1afd0 s> 0)
            int64_t* rdi_7 = nullptr
            
            do
                int64_t* rcx_33 = *(rdi_7 + data_143f1afc8)
                
                if (rcx_33 != 0)
                    (*(*rcx_33 + 0x10))(rcx_33)
                
                i_2 += 1
                rdi_7 = &rdi_7[1]
            while (i_2 s< data_143f1afd0)
        
        data_143f10908 -= 1
        sub_1419712f0(0)
        sub_141059b40(arg1 + 0x500, 1, 1)
        char rcx_35 = (data_1439c7a34).b
        int32_t rdi_8 = 1 << rcx_35
        int32_t i_8 = rdi_8 - 1
        
        if (rdi_8 != 1)
            uint64_t rflags_5
            int32_t temp0_7
            temp0_7, rflags_5 = _bit_scan_forward(i_8)
            int32_t rbx_5 = temp0_7
            int32_t var_f8_1 = rbx_5
            int32_t i_3
            
            do
                int64_t* rcx_36 = *(arg1 + (zx.q(rbx_5) << 3) + 0x9d8)
                (*(*rcx_36 + 8))(rcx_36)
                i_3 = not.d(1 << rbx_5.b) & i_8
                i_8 = i_3
                
                if (i_3 != 0)
                    uint64_t rflags_6
                    int32_t temp0_8
                    temp0_8, rflags_6 = _bit_scan_forward(i_3)
                    rbx_5 = temp0_8
                    int32_t var_f4_1 = rbx_5
                else
                    rbx_5 = 0x20
            while (i_3 != 0)
            rcx_35 = (data_1439c7a34).b
        
        int32_t rdi_9 = 1 << rcx_35
        int32_t i_9 = rdi_9 - 1
        
        if (rdi_9 != 1)
            uint64_t rflags_7
            int32_t temp0_9
            temp0_9, rflags_7 = _bit_scan_forward(i_9)
            int32_t rbx_6 = temp0_9
            int32_t var_f0_1 = rbx_6
            int32_t i_4
            
            do
                uint64_t rsi_5 = zx.q(rbx_6) << 3
                int64_t* rcx_38 = *(rsi_5 + arg1 + 0x9d8)
                
                if (rcx_38 != 0)
                    (**rcx_38)(rcx_38, 1)
                
                *(rsi_5 + arg1 + 0x9d8) = 0
                i_4 = not.d(1 << rbx_6.b) & i_9
                i_9 = i_4
                
                if (i_4 != 0)
                    uint64_t rflags_8
                    int32_t temp0_10
                    temp0_10, rflags_8 = _bit_scan_forward(i_4)
                    rbx_6 = temp0_10
                    int32_t var_ec_1 = rbx_6
                else
                    rbx_6 = 0x20
            while (i_4 != 0)
        
        (*(*(arg1 + 0x8b0) + 0x30))(arg1 + 0x8b0)
        *(arg1 + 0x4c8) = 0
        
        if (*(arg1 + 0x4cc) != 0)
            sub_1405c5570(arg1 + 0x4c0, 0)
        
        int64_t* rbx_7 = *(arg1 + 0x4d0)
        *(arg1 + 0x4d0) = 0
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                char rax_46
                
                if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
                    rax_46 = sub_1405949a0()
                
                if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_46 != 0))
                    (**rbx_7)(rbx_7, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_7 + 0xc))
                        *(rbx_7 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_7 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_48 = sub_140a20af0()
                        uint64_t rdx_14 = zx.q(rax_48)
                        void* const rax_49
                        
                        if (rax_48 != 0)
                            rax_49 = *(&data_143cf0bf8 + (rdx_14 u>> 0xe << 3))
                                + (zx.q(rdx_14.d) & 0x3fff) * 0x18
                        else
                            rax_49 = nullptr
                        
                        *(rax_49 + 8) = rbx_7
                        sub_1405a42f0(&data_143f02390, rdx_14.d)
        
        int32_t rbx_8 = 1 << (data_1439c7a34).b
        int32_t i_6 = rbx_8 - 1
        
        if (rbx_8 != 1)
            uint64_t rflags_9
            int32_t temp0_12
            temp0_12, rflags_9 = _bit_scan_forward(i_6)
            int32_t rsi_6 = temp0_12
            int32_t i_5
            
            do
                uint64_t r15_4 = zx.q(rsi_6) << 3
                sub_14101c810(*(r15_4 + arg1 + 0x4a0) + 0x10)
                void* r14_4 = *(r15_4 + arg1 + 0x4a0)
                
                if (r14_4 != 0)
                    sub_14101c810(r14_4 + 0x10)
                    int64_t rcx_50 = *(r14_4 + 0x98)
                    
                    if (rcx_50 != 0)
                        sub_140a74f90(rcx_50)
                    
                    DeleteCriticalSection(r14_4 + 0x40)
                    int64_t rcx_52 = *(r14_4 + 0x28)
                    
                    if (rcx_52 != 0)
                        sub_140a74f90(rcx_52)
                    
                    j_sub_140a74f90(r14_4)
                
                char rcx_54 = rsi_6.b
                *(r15_4 + arg1 + 0x4a0) = 0
                rsi_6 = 0x20
                i_5 = not.d(1 << rcx_54) & i_6
                i_6 = i_5
                
                if (i_5 != 0)
                    uint64_t rflags_10
                    int32_t temp0_13
                    temp0_13, rflags_10 = _bit_scan_forward(i_5)
                    rsi_6 = temp0_13
            while (i_5 != 0)
        
        void* rcx_55 = *(arg1 + 0x4e8)
        
        if (rcx_55 != 0)
            sub_14101c760(rcx_55)
            sub_1405d16e0(arg1 + 0x4e8, nullptr)
        
        void* rcx_57 = *(arg1 + 0x4f0)
        
        if (rcx_57 != 0)
            sub_14101c760(rcx_57)
            sub_1405d16e0(arg1 + 0x4f0, nullptr)
        
        sub_14105eb40(arg1 + 0x220)
        sub_1410498a0(arg1 + 0x1a0)
        int64_t* rcx_61 = *(arg1 + 0x418)
        *(arg1 + 0x418) = 0
        
        if (rcx_61 != 0)
            (*(*rcx_61 + 0x10))(rcx_61)
        
        int64_t* rcx_62 = *(arg1 + 0x420)
        *(arg1 + 0x420) = 0
        
        if (rcx_62 != 0)
            (*(*rcx_62 + 0x10))(rcx_62)
        
        int64_t* rcx_63 = *(arg1 + 0x428)
        *(arg1 + 0x428) = 0
        
        if (rcx_63 != 0)
            (*(*rcx_63 + 0x10))(rcx_63)
        
        void* rdi_10 = arg1 + 0x468
        int64_t rsi_7 = 4
        int64_t* result
        
        while (true)
            result = *rdi_10
            void* rdx_16 = *result
            
            if (rdx_16 == 0)
                rdi_10 += 0x10
                int64_t temp9_1 = rsi_7
                rsi_7 -= 1
                
                if (temp9_1 == 1)
                    break
            else
                void* rbx_9 = *(rdx_16 + 8)
                int64_t rcx_64 = *rdi_10
                *rdi_10 = rdx_16
                *(rdx_16 + 8) = 0
                j_sub_140a74f90(rcx_64)
                
                if (rbx_9 != 0)
                    HANDLE hObject = *(rbx_9 + 0x20)
                    
                    if (hObject != -1)
                        CloseHandle(hObject)
                        *(rbx_9 + 0x20) = -1
                    
                    int64_t* rcx_65 = *(rbx_9 + 0x18)
                    
                    if (rcx_65 != 0)
                        (*(*rcx_65 + 0x10))(rcx_65)
                    
                    j_sub_140a74f90(rbx_9)
        
        return result
    
    int64_t rax_30 = *rdx_12
    int64_t rcx_24 = rax_29 * 6
    void* rsi_4 = *(rax_30 + (rcx_24 << 3) + 0x18)
    void* r12_1 = rax_30 + (rcx_24 << 3)
    void* rbx_3 = *(rax_30 + (rcx_24 << 3) + 8)
    void* r15_3 = (sx.q(*(r12_1 + 0x20)) << 5) + rsi_4
    
    if (rsi_4 != r15_3)
        do
            int64_t rdi_2 = *(rsi_4 + 8)
            void* r14_3 = *(rsi_4 + 0x18)
            EnterCriticalSection(rbx_3 + 0x438)
            *(r14_3 + 8) = rdi_2
            int64_t rdi_5 = (zx.q(*(r14_3 + 0x10)) + 3) * 2
            int64_t* rax_31 = j_sub_140a82f30(0x10)
            
            if (rax_31 != 0)
                *rax_31 = 0
                rax_31[1] = r14_3
                void** rcx_26 = *(rbx_3 + 0x430 + (rdi_5 << 3))
                *(rbx_3 + 0x430 + (rdi_5 << 3)) = rax_31
                *rcx_26 = rax_31
            
            if (rbx_3 != -0x438)
                LeaveCriticalSection(rbx_3 + 0x438)
            
            rsi_4 += 0x20
        while (rsi_4 != r15_3)
        
        r14_2 = var_e0
    
    bool cond:5_1 = *(r12_1 + 0x24) == 0
    *(r12_1 + 0x20) = 0
    
    if (not(cond:5_1))
        sub_1405a51b0(r12_1 + 0x18, 0)
    
    var_140[1].d &= not.d(var_c8[1]:4.d)
    sub_14059bdd0(&var_c8[1])
    rcx_22 = var_d8
    r15 = var_d0
